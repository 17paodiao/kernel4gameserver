#ifndef __iocphead_h__
#define __iocphead_h__

#include "INetengine.h"
#include "MultiSys.h"
#include "TPool.h"
#include "TQueue.h"
#include "configmgr/Configmgr.h"
using namespace tlib;
using namespace tcore;

struct iocp_event {
    iocp_event() {
        buffLen = Configmgr::getInstance()->GetCoreConfig()->sNetRecvSize;
        pBuff = NEW char[buffLen];
        TASSERT(pBuff, "wtf");
    }

    void clear() {
        char * buff = pBuff;
        s32 len = buffLen;
        memset(this, 0, sizeof(*this));
        pBuff = buff;
        buffLen = len;
    }

    ~iocp_event() {
        delete[] pBuff;
    }

    OVERLAPPED ol;  /** ������,�ó�Ա����������ڵ�һλ */
    s8 opt;   /** �¼����� */
    s32 code; /** ������ */
    WSABUF wbuf; /** ��д�������ṹ����� */
    DWORD dwBytes, dwFlags; /** һЩ�ڶ�дʱ�õ��ı�־�Ա��� */
    char * pBuff;; /** �Լ��Ļ����� */
    s32 buffLen;
    s64 socket; /** ��� **/
    struct sockaddr_in remote; /** Զ�˵�ַ **/
    tcore::ISocket * pContext; /** ������ָ�� */
};

extern tlib::TPool<iocp_event, true> g_poolIocpevent;

// only for debug
extern CLockUnit g_lock;

// async connect and accept api address
extern LPFN_ACCEPTEX g_pFunAcceptEx;
extern LPFN_CONNECTEX g_pFunConnectEx;

LPFN_ACCEPTEX GetAcceptExFun();
LPFN_CONNECTEX GetConnectExFun();
void formartIocpevent(struct iocp_event * & pEvent, ISocket * p, const s64 socket, const s8 event);

#endif //__iocphead_h__

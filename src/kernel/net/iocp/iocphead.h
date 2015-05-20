#ifndef __iocphead_h__
#define __iocphead_h__

#include "INetengine.h"
#include "MultiSys.h"
#include "TQueue.h"
#include "CPipe.h"
#include "TPool.h"
#include "configmgr/Configmgr.h"
using namespace tlib;
using namespace tcore;

struct iocp_event {
    explicit iocp_event(s32 len) {
        TASSERT(len >= 0, "wtf");
        buffLen = len;
        (len > 0)?(pBuff = NEW char[len]):(pBuff = NULL);
        clear();
    }

    void clear() {
        char * buff = pBuff;
        s32 len = buffLen;
        memset(this, 0, sizeof(*this));
        pBuff = buff;
        buffLen = len;
        wbuf.buf = pBuff;
        wbuf.len = buffLen;
    }

    ~iocp_event() {
        if (pBuff) {
            delete[] pBuff;
        }
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
    void * pContext; /** ������ָ�� */
};

extern tlib::TPool<CPipe, true> g_oCPipePool;


// async connect and accept api address
extern LPFN_ACCEPTEX g_pFunAcceptEx;
extern LPFN_CONNECTEX g_pFunConnectEx;

LPFN_ACCEPTEX GetAcceptExFun();
LPFN_CONNECTEX GetConnectExFun();
void formartIocpevent(struct iocp_event * & pEvent, void * p, const s64 socket, const s8 event);

#endif //__iocphead_h__

#ifndef __iocphead_h__
#define __iocphead_h__

#include "INetengine.h"
#include "MultiSys.h"
#include "TPool.h"
#include "TQueue.h"
using namespace tlib;
using namespace tcore;

struct iocp_event {
    OVERLAPPED ol;  /** ������,�ó�Ա����������ڵ�һλ */
    s8 opt;   /** �¼����� */
    s32 code; /** ������ */
    WSABUF wbuf; /** ��д�������ṹ����� */
    DWORD dwBytes, dwFlags; /** һЩ�ڶ�дʱ�õ��ı�־�Ա��� */
    char buff[BUFF_SIZE]; /** �Լ��Ļ����� */
    s64 socket; /** ��� **/
    struct sockaddr_in remote; /** Զ�˵�ַ **/
    tcore::ISocket * pContext; /** ������ָ�� */
};

extern tlib::TPool<iocp_event, true> g_poolIocpevent;

// async connect and accept api address
extern LPFN_ACCEPTEX g_pFunAcceptEx;
extern LPFN_CONNECTEX g_pFunConnectEx;

LPFN_ACCEPTEX GetAcceptExFun();
LPFN_CONNECTEX GetConnectExFun();
void formartIocpevent(struct iocp_event * & pEvent, ISocket * p, const s64 socket, const s8 event);

#endif //__iocphead_h__

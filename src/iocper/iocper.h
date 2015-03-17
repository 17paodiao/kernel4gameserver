#ifndef __iocper_h__
#define __iocper_h__

#include "INetengine.h"
#include "TPool.h"
#include "TQueue.h"
#include "CThread.h"

enum {
    IO_TYPE_RECV = 0,
    IO_TYPE_SEND
};

struct iocp_event {
    OVERLAPPED ol;  /** ������,�ó�Ա����������ڵ�һλ */
    s8 event;   /** �¼����� */
    s8 iotype; /** io����, send����recve */
    s32 nerron; /** ������ */
    WSABUF wbuf; /** ��д�������ṹ����� */
    DWORD dwBytes, dwFlags; /** һЩ�ڶ�дʱ�õ��ı�־�Ա��� */
    s32 ioBytes;
    char buff[BUFF_SIZE]; /** �Լ��Ļ����� */
    s64 socket; /** ��� **/
    struct sockaddr_in remote; /** Զ�˵�ַ **/
    tcore::ISocket * p; /** ������ָ�� */
};

class iocper : public INetengine, public tlib::CThread {
public:
    static INetengine * getInstance();

    virtual bool Redry();
    virtual bool Initialize();
    virtual bool Destory();

    virtual bool AddServer(tcore::ITcpServer * server);
    virtual bool AddClient(tcore::ITcpSocket * client);
    virtual s64 DonetIO(s64 overtime);
    virtual void Run();

private:
    iocper() {
        m_hCompletionPort = NULL;
        m_bShutdown = true;
        m_nThreadCount = 0;
    }

private:
    HANDLE m_hCompletionPort;
    bool m_bShutdown;
    s32 m_nThreadCount;

    tlib::TPool<iocp_event, true> m_poolIocpevent;
    tlib::TQueue<iocp_event *, true, 4096> m_queueIocpevent;
    tlib::CLockUnit m_threadLock;

    // async connect and accept api address
    static LPFN_ACCEPTEX s_pFunAcceptEx;
    static LPFN_CONNECTEX s_pFunConnectEx;
};


#endif //__iocper_h__

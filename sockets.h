#include <netinet/in.h>

#ifndef CSERVER_SOCKETS_H
#define CSERVER_SOCKETS_H

namespace cserver {
    class Sockets {
        int m_serverFileDescriptor;
        int m_newSocket;
        sockaddr_in address;
        
        public:
            Sockets();
            Sockets(const Sockets& other);
            Sockets& operator=(const Sockets& other);
            ~Sockets();
    };
}

#endif
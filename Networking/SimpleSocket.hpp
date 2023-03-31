#include <sys/socket.h>
#include <netinet/in.h>

#ifndef SIMPLE_SOCKET_HPP_
#define SIMPLE_SOCKET_HPP_

#define PORT 8080 

namespace hde {
    class SimpleSocket {

        struct sockaddr_in address;
        int connection{};

        public:
            SimpleSocket(int domain, int service, int protocol, int port, u_long interface);
            ~SimpleSocket();
    };
}

#endif
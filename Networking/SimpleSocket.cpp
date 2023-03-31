#include "SimpleSocket.hpp"

namespace hde {
   SimpleSocket::SimpleSocket(int domain, int service, int protocol, int port, u_long interface)  {
        address.sin_port = port;
        address.sin_family = domain;
        address.sin_addr.s_addr = htonl(interface);
        this->connection = socket(domain, service, protocol);

    }
}
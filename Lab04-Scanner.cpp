#include <iostream>
#include <sys/socket.h>
#include <arpa/inet.h>

using namespace std;

int main() {
    
    int my_socket = socket(AF_INET, SOCK_STREAM, 0);
    struct sockaddr_in cible;
    cible.sin_family = AF_INET;
    cible.sin_port = htons(80);
    inet_pton(AF_INET, "127.0.0.1", &cible.sin_addr);

    cout<<"L'adresse de la cible est prete !" <<endl;



    return 0;
}

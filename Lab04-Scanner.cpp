#include <iostream>
#include <sys/socket.h>
#include <arpa/inet.h>
#include <unistd.h>      

using namespace std;

int main() {
    // 1. Create socket
    int my_socket = socket(AF_INET, SOCK_STREAM, 0);
    if (my_socket == -1) return 1;

    // 2. Prepare target address
    struct sockaddr_in cible;
    cible.sin_family = AF_INET;
    cible.sin_port = htons(80); 
    inet_pton(AF_INET, "8.8.8.8", &cible.sin_addr);

    // 3. Try to connect
    cout << "Scanning port 80..." << endl;
    int resultat = connect(my_socket, (struct sockaddr*)&cible, sizeof(cible));

    // 4. Check result
    if (resultat == 0) {
        cout << "Port 80 is OPEN!" << endl;
    } else {
        cout << "Port 80 is CLOSED." << endl;
    }

    // 5. Cleanup
    close(my_socket);
    return 0;
}

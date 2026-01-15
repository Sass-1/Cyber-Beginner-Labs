#include <iostream>
#include <sys/socket.h>
#include <arpa/inet.h>
#include <unistd.h>
#include <string> 
#include <sys/time.h> // Required for the timeout structure (timeval)

using namespace std;

int main() {
    // 1. INPUT SECTION
    string target_ip; 
    cout << "Enter the target IP address to scan: ";
    cin >> target_ip; 

    // Initialize the target address structure
    struct sockaddr_in target_addr;
    target_addr.sin_family = AF_INET;
    
    // Convert the string IP to network binary format
    if (inet_pton(AF_INET, target_ip.c_str(), &target_addr.sin_addr) <= 0) {
        cout << "Invalid IP address format. Exiting." << endl;
        return 1;
    }

    // 2. TIMEOUT CONFIGURATION
    // We set a 200ms timeout so the scanner doesn't freeze on closed ports
    struct timeval timeout;
    timeout.tv_sec = 0;
    timeout.tv_usec = 200000; // 200,000 microseconds = 0.2 seconds

    cout << "-----------------------------------------------" << endl;
    cout << "Starting scan on: " << target_ip << endl;
    cout << "Target range: Well-known ports (1 - 1024)" << endl;
    cout << "-----------------------------------------------" << endl;

    // 3. SCANNING LOOP
    for (int port = 1; port <= 1024; port++) {
        
        // Visual feedback: '\r' keeps the counter on the same line
        cout << "Current port being tested: " << port << "   \r";
        cout.flush(); // Forces the terminal to update the number immediately

        // Create a new socket for each port attempt
        int client_socket = socket(AF_INET, SOCK_STREAM, 0);
        if (client_socket == -1) continue;

        // Apply the timeout settings to the socket (Receive and Send)
        setsockopt(client_socket, SOL_SOCKET, SO_RCVTIMEO, (const char*)&timeout, sizeof(timeout));
        setsockopt(client_socket, SOL_SOCKET, SO_SNDTIMEO, (const char*)&timeout, sizeof(timeout));

        // Prepare the port for this iteration
        target_addr.sin_port = htons(port);

        // Attempt to connect
        int connection_result = connect(client_socket, (struct sockaddr*)&target_addr, sizeof(target_addr));

        // If connection_result is 0, the port is open
        if (connection_result == 0) {
            // We clear the line and print the success message
            cout << "[+] Port " << port << " is OPEN!             " << endl;
        }

        // Always close the socket to release system resources
        close(client_socket);
    }

    cout << "\n-----------------------------------------------" << endl;
    cout << "Scan finished successfully." << endl;
    
    return 0;
}     

/* Load Balancing:
For example, imagine you have a set of servers that handle requests for a web application. The key to load balancing is using the hash value of a client's IP address or a request ID to determine which server should handle the request. The hash function is typically designed so that the data is evenly distributed across the servers, ensuring that no single server is overloaded. Write a program of a load balancing system using hashing,  where  a basic hash table for mapping incoming requests to a set of servers.*/

#include <iostream>
using namespace std;

void hashing(){

int indexes[100], count = 0; 
    char q;
    while (1) {
        int server, ID, server_index;
        cout << "Enter the total number of servers: ";
        cin >> server;
        cout << "Enter your ID: ";
        cin >> ID;
          server_index = ID % server;
        indexes[count++] = server_index;
        cout << "Your request is accepted by Server: " << server_index << endl;
        cout << "Do you want to continue? "<<endl;
        cout << "Enter Y if yes "<<endl;
        cout << "Enter 'n' or 'N' if no "<<endl;
         cin >> q;
         cout<<endl<<endl;
        if (q == 'n' || q == 'N') {
			break;
			
		}
    }
    cout << "\nserver indexes is: ";
    for (int i = 0; i < count; i++) {
        cout << indexes[i]<<" ";
    }
}
int main() {
	
	hashing();
    
}


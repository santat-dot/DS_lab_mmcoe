#include <iostream>
using namespace std;

class Node {
public:
    string task_name;
    int priority;
    int exe_time;
    Node *next;

      Node(string t, int p, int e) {
        task_name = t;
        priority = p;
        exe_time = e;
        next = NULL;
    }

    void display() {
        cout << "Task Name: " << task_name
             << ", Priority: " << priority
             << ", Execution Time: " << exe_time<< endl;
    }
};


int main() {
    int n;
    Node *header = NULL, *temp = NULL, *t, *prev;
    string tn;
    int p, e;
    cout << "enter No. of Tasks: ";
    cin >> n;

    for(int i = 0; i < n; i++) {
        cout << "enter Task Name : ";
        cin >> tn;
        
        cout << "enter Priority : ";
        cin >> p;
        cout << "enter Execution Time : ";
        cin >> e;

        temp = new Node(tn, p, e);

        if(header == NULL || p > header->priority) {
           
           temp->next = header;
           header = temp;

        }
        else {
           
            t = header;
            while(t != NULL && t->priority >= p) {
                prev = t;
                t = t->next;
            }
            prev->next = temp;
            temp->next = t;
        }
    }

   
    t = header;
    while(t != NULL) {
        t->display();
        t = t->next;
    }

    return 0;
}


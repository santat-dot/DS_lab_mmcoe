#include <iostream>
using namespace std;

class Node {
public:
    string Task_Name;
    int priority;
    int exe_time;
    Node* next;

    
    Node(string task, int p, int t) {
        Task_Name = task;
        priority = p;
        exe_time = t;
        next = nullptr;
    }

    void display() {
        cout << "task Name: " << Task_Name << ", ";
        cout << "priority: " << priority << ", ";
        cout << "pxecution Time: " << exe_time << endl;
    }
};


Node* insert(Node* head, string task, int priority, int exe_time) {
    Node* newNode = new Node(task, priority, exe_time);

    
    if (head == nullptr || priority > head->priority) {
        newNode->next = head;
        return newNode;
    }

    Node* temp = head;
   
    while (temp->next != nullptr && temp->next->priority >= priority) {
        temp = temp->next;
    }

    newNode->next = temp->next;
    temp->next = newNode;

    return head;
}

int main() {
    Node* head = nullptr;
    int m;
    string task;
    int priority, exe_time;

    cout << "How many nodes do you want to ";
    cin >> m;

    for (int i = 0; i < m; i++) {
        cout << "Task Name: ";
        cin >> task;
        cout << "Enter Priority  ";
        cin >> priority;
        cout << " Execution Time: ";
        cin >> exe_time;

        head = insert(head, task, priority, exe_time);
    }

    cout << "\n List of Tasks :\n";
    Node* temp = head;
    while (temp != nullptr) {
        temp->display();
        temp = temp->next;
    }

    return 0;
}

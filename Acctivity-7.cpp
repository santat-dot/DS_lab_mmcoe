#include <iostream>
using namespace std;


int front = -1, rear = -1;
int sz = 5;                  
string queue[5];              


int isFull() {
    if ((rear + 1) % sz == front)
        return 1;
    else
        return 0;
}


int isEmpty() {
    if (front == -1)
        return 1;
    else
        return 0;
}


void enqueue(string job) {
    if (isFull()) {
        cout << "Queue is full! Cannot add job: " << job << endl;
        return;
    }

    if (isEmpty()) {
        front = 0;
        rear = 0;
    } else {
        rear = (rear + 1) % sz;
    }

    queue[rear] = job;
    cout << "Job added: " << job << endl;
}


void dequeue() {
    if (isEmpty()) {
        cout << "Queue is empty! No jobs to process." << endl;
        return;
    }

    cout << "Processing job: " << queue[front] << endl;

    if (front == rear) {
        
        front = -1;
        rear = -1;
    } else {
        front = (front + 1) % sz;
    }
}


void display() {
    if (isEmpty()) {
        cout << "No jobs in queue." << endl;
        return;
    }

    cout << "Current print jobs in queue: ";
    int i = front;
    while (true) {
        cout << queue[i] << "  ";
        if (i == rear)
            break;
        i = (i + 1) % sz;
    }
    cout << endl;
}


int main() {
    int choice;
    string job;

    do {
        cout << "\nMENU" << endl;
        cout << "1. Add Print Job (Enqueue)" << endl;
        cout << "2. Process Print Job (Dequeue)" << endl;
        cout << "3. Display Print Queue" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter print job name: ";
                cin >> job;
                enqueue(job);
                break;
            case 2:
                dequeue();
                break;
            case 3:
                display();
                break;
            case 4:
                cout << "Exiting Printer Spooler..." << endl;
                break;
            default:
                cout << "Invalid choice! Try again." << endl;
        }

    } while (choice != 4);

    return 0;
}


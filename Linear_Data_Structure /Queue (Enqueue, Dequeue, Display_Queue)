#include <iostream>
using namespace std;

#define size 5
int queue[size];
int front = -1;
int rear = -1;

void Enqueue(int a) {
    if (rear == size - 1) {
        cout << "The Queue is Overflow!" << endl;
    } else {
        if (front == -1) {
            front = 0;
        }
        rear++;
        queue[rear] = a;
        cout << "The value is inserted: " << queue[rear] << endl;
    }
}

void Dequeue() {
    if (front == -1) {
        cout << "The Queue is Underflow!" << endl;
    } else {
        cout << "The Element is Deleted... " << queue[front] << endl;
        front++;
    }
    if (front > rear) {
        front = rear = -1;
    }
}

void DisplayData() {
    if (rear == -1) {
        cout << "The Queue is Empty!" << endl;
    } else {
        cout << "The Queue Elements are: ";
        for (int i = front; i <= rear; i++) {
            cout << queue[i] << " ";
        }
        cout << endl;
    }
}

int main() {
    int choice, value;

        cout << "1--> Enqueue." << endl;
        cout << "2--> Dequeue." << endl;
        cout << "3--> Display Queue." << endl;
        cout << "4--> Exit." << endl;
    do{
        cout << "Enter the choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter the value for Enqueue: ";
                cin >> value;
                Enqueue(value);
                break;
            case 2: 
                Dequeue();
                break;
            case 3:
                DisplayData();
                break;
            case 4:
                cout << "The program is End!" << endl;
            default:
                cout << "Invalid Choice!" << endl;
        }
    }
    while(choice!=4);
return 0;
}

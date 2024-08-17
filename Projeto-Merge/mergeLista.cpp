#include <iostream>

using namespace std;

struct Node {
    int data;
    Node* next;
};

class Stack {
private:
    Node* top;
public:
    Stack() : top(nullptr) {}

    void push(int value) {
        Node* newNode = new Node();
        newNode->data = value;
        newNode->next = top;
        top = newNode;
    }

    int pop() {
        if (top == nullptr) {
            cout << "Pilha vazia!" << endl;
            return -1;
        }
        int value = top->data;
        Node* temp = top;
        top = top->next;
        delete temp;
        return value;
    }

    bool isEmpty() {
        return top == nullptr;
    }
};

int main() {
    Stack evenStack, oddStack;
    int previous = 0, num;

    cout << "Digite 30 números em ordem crescente:" << endl;

    for (int i = 0; i < 30; i++) {
        do {
            cout << "Número " << i + 1 << ": ";
            cin >> num;

            if (i > 0 && num <= previous) {
                cout << "Talvez você não saiba, mas não pode escrever um número inferior ao anterior. Reescreva um maior." << endl;
            }
        } while (i > 0 && num <= previous);

        previous = num;

        if (num % 2 == 0) {
            evenStack.push(num);
        } else {
            oddStack.push(num);
        }
    }

    cout << "\nNúmeros pares em ordem decrescente:" << endl;
    while (!evenStack.isEmpty()) {
        cout << evenStack.pop() << endl;
    }

    cout << "\nNúmeros ímpares em ordem decrescente:" << endl;
    while (!oddStack.isEmpty()) {
        cout << oddStack.pop() << endl;
    }

    return 0;
}

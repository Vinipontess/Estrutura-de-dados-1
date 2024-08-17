#include <iostream>

using namespace std;

class Stack {
private:
    int* arr;
    int top;
    int capacity;
public:
    Stack(int size) {
        arr = new int[size];
        top = -1;
        capacity = size;
    }

    ~Stack() {
        delete[] arr;
    }

    void push(int value) {
        if (top < capacity - 1) {
            arr[++top] = value;
        } else {
            cout << "Pilha cheia!" << endl;
        }
    }

    int pop() {
        if (top == -1) {
            cout << "Pilha vazia!" << endl;
            return -1;
        }
        return arr[top--];
    }

    bool isEmpty() {
        return top == -1;
    }
};

int main() {
    Stack evenStack(30), oddStack(30);
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

#include <iostream>
using namespace std;

#define MAX 5

class Stack
{
    int stack[MAX];
    int top;

public:
    Stack()
    {
        top = -1;
    }

    void push()
    {
        int value;

        if (isFull())
        {
            cout << "Stack Overflow! Stack is full.\n";
        }
        else
        {
            cout << "Enter value to push: ";
            cin >> value;

            top++;
            stack[top] = value;

            cout << value << " pushed into stack.\n";
        }
    }

    void pop()
    {
        if (isEmpty())
        {
            cout << "Stack Underflow! Stack is empty.\n";
        }
        else
        {
            cout << stack[top] << " popped from stack.\n";
            top--;
        }
    }

    bool isEmpty()
    {
        return top == -1;
    }

    bool isFull()
    {
        return top == MAX - 1;
    }

    void display()
    {
        if (isEmpty())
        {
            cout << "Stack is empty.\n";
        }
        else
        {
            cout << "Stack elements are:\n";

            for (int i = top; i >= 0; i--)
            {
                cout << stack[i] << " ";
            }

            cout << endl;
        }
    }

    void peek()
    {
        if (isEmpty())
        {
            cout << "Stack is empty.\n";
        }
        else
        {
            cout << "Top element is: " << stack[top] << endl;
        }
    }
};

int main()
{
    Stack s;
    int choice;

    do
    {
        cout << "\n--- STACK MENU ---\n";
        cout << "1. Push\n";
        cout << "2. Pop\n";
        cout << "3. isEmpty\n";
        cout << "4. isFull\n";
        cout << "5. Display\n";
        cout << "6. Peek\n";
        cout << "7. Exit\n";

        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            s.push();
            break;

        case 2:
            s.pop();
            break;

        case 3:
            if (s.isEmpty())
                cout << "Stack is Empty.\n";
            else
                cout << "Stack is not Empty.\n";
            break;

        case 4:
            if (s.isFull())
                cout << "Stack is Full.\n";
            else
                cout << "Stack is not Full.\n";
            break;

        case 5:
            s.display();
            break;

        case 6:
            s.peek();
            break;

        case 7:
            cout << "Program ended.\n";
            break;

        default:
            cout << "Invalid choice!\n";
        }

    } while (choice != 7);

    return 0;
}
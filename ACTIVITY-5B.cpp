#include <iostream>
#include <string>
using namespace std;

char stackArr[100];
int top = -1;

void push(char c) {
    if (top < 99) {
        stackArr[++top] = c;
    } else {
        cout << "Stack overflow!" << endl;
    }
}

char pop() {
    if (top == -1) {
        return '\0';
    } else {
        return stackArr[top--];
    }
}

int precedence(char c) {
    if (c == '+' || c == '-') {
        return 1;
    } else if (c == '*' || c == '/') {
        return 2;
    } else if (c == '^') {
        return 3;
    } else {
        return 0;
    }
}

string infixToPostfix(string infix) {
    string postfix = "";

    for (int i = 0; i < infix.length(); i++) {
        char c = infix[i];

        
        if (isalnum(c)) {
            postfix += c;
        }

        
        else if (c == '(') {
            push(c);
        }

       
        else if (c == ')') {
            while (top != -1 && stackArr[top] != '(') {
                postfix += pop();
            }
            pop(); 
        }

     
        else {
            while (top != -1 && precedence(stackArr[top]) >= precedence(c)) {
                postfix += pop();
            }
            push(c);
        }
    }

    while (top != -1) {
        postfix += pop();
    }

    return postfix;
}

int main() {
    string infix;
    cout << "Enter infix expression: ";
    cin >> infix;

    string postfix = infixToPostfix(infix);
    cout << "Postfix expression: " << postfix << endl;

    return 0;
}


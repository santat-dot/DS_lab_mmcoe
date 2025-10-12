#include <iostream>
using namespace std;

class Stack {
public:
    int top;
    string arr; 

    Stack() {
        top = -1;
        arr = "";
    }

    int isFull() {
        
        return 0;
    }

    int isEmpty() {
        if (top == -1)
            return 1;
        else
            return 0;
    }

    void push(char x) {
        top = top + 1;      
        arr.push_back(x);  
    }

    void pop() {
        if (isEmpty()) {
            cout << "Stack underflow" << endl;
        } else {
            arr.pop_back();  
            top = top - 1;
        }
    }

    char peek() {
        if (isEmpty())
            return '\0';
        else
            return arr[top];
    }
};


int check(char open, char close) {
    if ((open == '(' && close == ')') ||
        (open == '{' && close == '}') ||
        (open == '[' && close == ']'))
        return 1;
    else
        return 0;
}


int isBalanced(string expr) {
    Stack s;

    for (int i = 0; i < expr.length(); i++) {
        char ch = expr[i];

       
        if (ch == '(' || ch == '{' || ch == '[') {
            s.push(ch);
        }
        
        else if (ch == ')' || ch == '}' || ch == ']') {
            if (s.isEmpty()) {
                return 0; 
            } 
            else if (check(s.peek(), ch) == 0) {
                return 0; 
            } 
            else {
                s.pop(); 
            }
        }
    }

   
    if (s.isEmpty())
        return 1;
    else
        return 0;
}

int main() {
    string expr;

    cout << "Enter an expression: ";
    cin >> expr;

    if (isBalanced(expr) == 1) {
        cout << "Expression is well parenthesized." << endl;
    } else {
        cout << "Expression is NOT well parenthesized." << endl;
    }

    return 0;
}

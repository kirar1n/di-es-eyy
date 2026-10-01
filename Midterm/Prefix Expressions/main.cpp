#include <iostream>
#include <string>
#include "arraystack.hpp"

using namespace std;

int main() {
    // Step 1: Create the stack instance
    Stack* stack = new ArrayStack();

    // Step 2: Ask the user for number of items to be inputted
    int n;
    cout << "Enter number of inputs: ";
    cin >> n;

    // Step 3: Initialize a string array and place all items there
    string* exp = new string[n];
    cout << "Enter expression: ";
    for (int i = 0; i < n; i++) {
        cin >> exp[i];
    }

    // Step 4: Loop the array from last to first
    for (int i = n - 1; i >= 0; i--) {
        string token = exp[i];
        
        // Step 5: Use switch statement to identify operations and operators
        if (token == "+" || token == "-" || token == "*" || token == "/") {
            int a = stack->pop();
            int b = stack->pop();
            switch (token[0]) {
                case '+':
                    stack->push(a + b);
                    break;
                case '-':
                    stack->push(a - b);
                    break;
                case '*':
                    stack->push(a * b);
                    break;
                case '/':
                    stack->push(a / b);
                    break;
            }
        } else {
            stack->push(stoi(token));
        }
    }

    // Step 6: When loop is done, output the answer
    cout << "Answer is " << stack->pop() << endl;

    return 0;
}

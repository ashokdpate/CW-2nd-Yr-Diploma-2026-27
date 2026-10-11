/*Write a code for evaluating infix expression*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define MAX_SIZE 100

int isOperator(char c) {
    return (c == '+' || c == '-' || c == '*' || c == '/' || c == '^');
}

int getPrecedence(char c) {
    switch (c) {
        case '+':
        case '-':
            return 1;
        case '*':
        case '/':
            return 2;
        case '^':
            return 3;
        default:
            return -1;
    }
}

int evaluateInfix(char* infix) {
    int i, top = -1;
    int stack[MAX_SIZE];

    for (i = 0; infix[i] != '\0'; i++) {
        if (isdigit(infix[i])) {
            stack[++top] = infix[i] - '0';
        } else if (isOperator(infix[i])) {
            int operand2 = stack[top--];
            int operand1 = stack[top--];
            switch (infix[i]) {
                case '+':
                    stack[++top] = operand1 + operand2;
                    break;
                case '-':
                    stack[++top] = operand1 - operand2;
                    break;
                case '*':
                    stack[++top] = operand1 * operand2;
                    break;
                case '/':
                    stack[++top] = operand1 / operand2;
                    break;
                case '^':
                    stack[++top] = pow(operand1, operand2);
                    break;
            }
        }
    }
    return stack[top];
}

int main() {
    char infix[100];
    int result;
    printf("Enter an infix expression: ");
    fgets(infix, sizeof(infix), stdin);
    infix[strcspn(infix, "\n")] = 0; // Remove newline character
    result = evaluateInfix(infix);
    printf("Result: %d\n", result);
    return 0;
}
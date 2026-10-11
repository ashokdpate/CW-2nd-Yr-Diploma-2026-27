/*Write a code for evaluating postfix expression*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define MAX_SIZE 100

int isOperator(char c) {
    return (c == '+' || c == '-' || c == '*' || c == '/' || c == '^');
}

int evaluatePostfix(char* postfix) {
    int i, top = -1;
    int stack[MAX_SIZE];

    for (i = 0; postfix[i] != '\0'; i++) {
        if (isdigit(postfix[i])) {
            stack[++top] = postfix[i] - '0';
        } else if (isOperator(postfix[i])) {
            int operand2 = stack[top--];
            int operand1 = stack[top--];
            switch (postfix[i]) {
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
    char postfix[100];
    int result;
    printf("Enter a postfix expression: ");
    fgets(postfix, sizeof(postfix), stdin);
    postfix[strcspn(postfix, "\n")] = 0; // Remove newline character
    result = evaluatePostfix(postfix);
    printf("Result: %d\n", result);
    return 0;
}
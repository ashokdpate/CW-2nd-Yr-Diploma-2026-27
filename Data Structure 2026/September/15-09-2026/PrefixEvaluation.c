/*Write a code for evaluating prefix expression*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define MAX_SIZE 100

int isOperator(char c) {
    return (c == '+' || c == '-' || c == '*' || c == '/' || c == '^');
}

int evaluatePrefix(char* prefix) {
    int i, top = -1;
    int stack[MAX_SIZE];

    // Process the prefix expression from right to left
    for (i = strlen(prefix) - 1; i >= 0; i--) {
        if (isdigit(prefix[i])) {
            stack[++top] = prefix[i] - '0';
        } else if (isOperator(prefix[i])) {
            int operand2 = stack[top--];
            int operand1 = stack[top--];
            switch (prefix[i]) {
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
    char prefix[100];
    int result;
    printf("Enter a prefix expression: ");
    fgets(prefix, sizeof(prefix), stdin);
    prefix[strcspn(prefix, "\n")] = 0; // Remove newline character
    result = evaluatePrefix(prefix);
    printf("Result: %d\n", result);
    return 0;
}
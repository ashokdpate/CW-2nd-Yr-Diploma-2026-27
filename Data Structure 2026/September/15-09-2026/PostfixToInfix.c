/*Write a code for converting postfix expression to infix expression*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define MAX_SIZE 100

int isOperator(char c) {
    return (c == '+' || c == '-' || c == '*' || c == '/' || c == '^');
}

void postfixToInfix(char* postfix, char* infix) {
    int i, j = 0;
    char stack[MAX_SIZE];
    int top = -1;

    for (i = 0; postfix[i] != '\0'; i++) {
        if (isalnum(postfix[i])) {
            stack[++top] = postfix[i];
        } else if (isOperator(postfix[i])) {
            char operand2 = stack[top--];
            char operand1 = stack[top--];
            infix[j++] = '(';
            infix[j++] = operand1;
            infix[j++] = postfix[i];
            infix[j++] = operand2;
            infix[j++] = ')';
        }
    }
    infix[j] = '\0';
}

int main() {
    char postfix[100], infix[100];
    printf("Enter a postfix expression: ");
    fgets(postfix, sizeof(postfix), stdin);
    postfix[strcspn(postfix, "\n")] = 0; // Remove newline character
    postfixToInfix(postfix, infix);
    printf("Infix expression: %s\n", infix);
    return 0;
}
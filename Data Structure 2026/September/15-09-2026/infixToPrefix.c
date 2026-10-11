/*Write a code for converting infix expression to prefix expression*/
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

void infixToPrefix(char* infix, char* prefix) {
    int i, j = 0;
    char stack[MAX_SIZE];
    int top = -1;

    // Reverse the infix expression
    strrev(infix);

    for (i = 0; infix[i] != '\0'; i++) {
        if (isalnum(infix[i])) {
            prefix[j++] = infix[i];
        } else if (infix[i] == ')') {
            stack[++top] = infix[i];
        } else if (infix[i] == '(') {
            while (top != -1 && stack[top] != ')') {
                prefix[j++] = stack[top--];
            }
            if (top != -1) {
                top--;
            }
        } else if (isOperator(infix[i])) {
            while (top != -1 && getPrecedence(stack[top]) >= getPrecedence(infix[i])) {
                prefix[j++] = stack[top--];
            }
            stack[++top] = infix[i];
        }
    }

    while (top != -1) {
        prefix[j++] = stack[top--];
    }

    prefix[j] = '\0';

    // Reverse the result
    strrev(prefix);
}

int main() {
    char infix[100], prefix[100];
    printf("Enter an infix expression: ");
    fgets(infix, sizeof(infix), stdin);
    infix[strcspn(infix, "\n")] = 0; // Remove newline character
    infixToPrefix(infix, prefix);
    printf("Prefix expression: %s\n", prefix);
    return 0;
}
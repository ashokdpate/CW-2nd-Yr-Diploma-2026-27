/*Write a code for converting infix expression to postfix expression*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define MAX_SIZE 100

int precedence(char operator) {
    switch (operator) {
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

int isOperator(char c) {
    return (c == '+' || c == '-' || c == '*' || c == '/' || c == '^');
}

void infixToPostfix(char* infix, char* postfix) {
    int i, j = 0;
    char stack[MAX_SIZE];
    int top = -1;

    for (i = 0; infix[i] != '\0'; i++) {
        if (isalnum(infix[i])) {
            postfix[j++] = infix[i];
        } else if (infix[i] == '(') {
            stack[++top] = infix[i];
        } else if (infix[i] == ')') {
            while (top != -1 && stack[top] != '(') {
                postfix[j++] = stack[top--];
            }
            if (top != -1) {
                top--;
            }
        } else if (isOperator(infix[i])) {
            while (top != -1 && precedence(stack[top]) >= precedence(infix[i])) {
                postfix[j++] = stack[top--];
            }
            stack[++top] = infix[i];
        }
    }

    while (top != -1) {
        postfix[j++] = stack[top--];
    }
    postfix[j] = '\0';
}

int main() {
    char infix[100], postfix[100];
    printf("Enter an infix expression: ");
    fgets(infix, sizeof(infix), stdin);
    infix[strcspn(infix, "\n")] = 0; // Remove newline character
    infixToPostfix(infix, postfix);
    printf("Postfix expression: %s\n", postfix);
    return 0;
}
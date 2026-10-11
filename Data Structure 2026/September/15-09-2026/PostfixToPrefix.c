/*Write a code for converting postfix expression to prefix expression*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define MAX_SIZE 100

int isOperator(char c) {
    return (c == '+' || c == '-' || c == '*' || c == '/' || c == '^');
}

void postfixToPrefix(char* postfix, char* prefix) {
    int i, j = 0;
    char stack[MAX_SIZE];
    int top = -1;

    for (i = 0; postfix[i] != '\0'; i++) {
        if (isalnum(postfix[i])) {
            stack[++top] = postfix[i];
        } else if (isOperator(postfix[i])) {
            char operand2 = stack[top--];
            char operand1 = stack[top--];
            prefix[j++] = postfix[i];
            prefix[j++] = operand1;
            prefix[j++] = operand2;
        }
    }
    prefix[j] = '\0';
}

int main() {
    char postfix[100], prefix[100];
    printf("Enter a postfix expression: ");
    fgets(postfix, sizeof(postfix), stdin);
    postfix[strcspn(postfix, "\n")] = 0; // Remove newline character
    postfixToPrefix(postfix, prefix);
    printf("Prefix expression: %s\n", prefix);
    return 0;
}
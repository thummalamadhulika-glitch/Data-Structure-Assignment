#include <stdio.h>
#include <string.h>

#define MAX 100

char stack[MAX];
int top = -1;

void push(char ch) {
    stack[++top] = ch;
}

char pop() {
    return stack[top--];
}

int main() {
    char str[100], rev[100];
    int i;

    printf("Enter string: ");
    scanf("%s", str);

    for(i = 0; str[i] != '\0'; i++)
        push(str[i]);

    for(i = 0; i < strlen(str); i++)
        rev[i] = pop();

    rev[i] = '\0';

    printf("Reversed string: %s", rev);
    return 0;
}
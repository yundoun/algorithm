#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_STACK_SIZE 100
typedef int Element;

Element data[MAX_STACK_SIZE];
int top;

void error(char str[])
{
    printf("%s\n", str);
    exit(1);
}

void init_stack() { // 스택 초기화
    top = -1;
}

int is_empty() { // 스택 공백상태 확인
    return top == -1;
}

int is_full() { // 스택 포화상태
    return top == MAX_STACK_SIZE - 1;
}

int size() { // 스택의 크기 반환
    return top + 1;
}

void push(Element e) {
    if (is_full()) {
        error("스택 포화 에러");
    }
    data[++top] = e;
}

Element pop() {
    if (is_empty()) {
        error("스택 공백 에러");
    }
    return data[top--];
}

Element peek() {
    if (is_empty()) {
        return -1;
    }
    return data[top];
}

int precedence(char op)  // 연산자를 전달받고 우선순위를 반환하는 함수
{
    switch (op) {
        case '(': case')': return 0;
        case '+': case '-': return 1;
        case '*': case '/': return 2;
    }
    return -1;
}

void infix_to_postfix(char expr[])  // 중위 표현식에서 후위 표현식으로 변환
{
    int i = 0;
    char c, op;

    init_stack();
    while (expr[i] != '\0') { // 문자열 배열 끝까지 탐색
        c = expr[i++]; 
        if ((c >= 'A' && c <= 'Z')) {
            printf("%c", c);
        }
        else if (c == '(') {  // "(" 만나면 스택에 PUSH
            push(c);
        }
        else if (c == ')') {
            while (is_empty() == 0) { // 스택이 공백일 때까지 반복                  
                op = pop();
                if (op == '(') break; // "(" 전까지 모두 출력하기 위한 break
                else printf("%c", op);
            }
        }
        else if (c == '+' || c == '-' || c == '*' || c == '/') {
            while (is_empty() == 0) {
                op = peek();
                if (precedence(c) <= precedence(op)) { // 우선순위 체크
                    printf("%c", op);
                    pop();
                }
                else break;
            }
            push(c);

        }
    }

    while (is_empty() == 0)
        printf("%c", pop());
    printf("\n");

}

int main() {

    char expr[100] ;

    scanf("%s", expr);

    infix_to_postfix(expr);

    return 0;

}
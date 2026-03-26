#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "calculator.h"

int is_number(const char *str) {
    int i = 0;

    if (str == NULL || str[0] == '\0') {
        return 0;
    }

    if (str[0] == '-' || str[0] == '+') {
        i = 1;
    }

    if (str[i] == '\0') {
        return 0;
    }

    for (; str[i] != '\0'; i++) {
        if (!isdigit((unsigned char)str[i])) {
            return 0;
        }
    }

    return 1;
}

int main(int argc, char *argv[]) {
    char op;
    int num1, num2;
    int result;

    if (argc != 4) {
        printf("사용법: %s <연산자> <숫자1> <숫자2>\n", argv[0]);
        printf("예: %s + 10 20\n", argv[0]);
        printf("지원 연산자: +  -  *  /\n");
        return 1;
    }

    if (strlen(argv[1]) != 1) {
        printf("입력 오류: 연산자는 한 글자여야 합니다.\n");
        return 1;
    }

    if (!is_number(argv[2]) || !is_number(argv[3])) {
        printf("입력 오류: 숫자 2개를 정확히 입력해야 합니다.\n");
        return 1;
    }

    op = argv[1][0];
    num1 = atoi(argv[2]);
    num2 = atoi(argv[3]);
    switch (op) {
        case '+':
            result = add(num1, num2);
            printf("결과: %d\n", result);
            break;

        case '-':
            result = sub(num1, num2);
            printf("결과: %d\n", result);
            break;

        case 'x':
            result = mul(num1, num2);
            printf("결과: %d\n", result);
            break;

        case '/':
            if (divide(num1, num2, &result) != 0) {
                printf("오류: 0으로 나눌 수 없습니다.\n");
                return 1;
            }
            printf("결과: %d\n", result);
            break;

        default:
            printf("지원하지 않는 연산자입니다.\n");
            printf("지원 연산자: +  -  *  /\n");
            return 1;
    }

    return 0;
}


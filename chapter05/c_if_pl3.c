#include <stdio.h>

int main(void) {
    int num1, num2;
    printf("첫번째 수:");
    scanf("%d", &num1);
    printf("두번째 수: ");
    scanf("%d", &num2);

    

    // 조건 
    // 1. 수1이 수2보다 큰경우 출력
    // 2. 수1이 수2보다 작은경우 출력
    // 3. 수1이 수2와 같다 출력
    // → 조건문! 만들어보세요

    if(num1 > num2) {
        printf("%d(이)가 %d보다 크다.", num1, num2);

    } else if(num1 == num2) {
        printf("%d(이)가 %d와 같다.", num1, num2);
    } else {
        printf("%d(이)가 %d보다 작다.", num1, num2);
    }
}
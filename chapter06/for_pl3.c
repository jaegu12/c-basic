#include <stdio.h>

//1~10까지 값을 보고 짝수면 짝수출력 홀수면 홀수 출력
int main(void) {
    for(int i=1; i<=10; i++) 
        // if(0) 이자나요 false
        // if(1) → True
        if(i % 2) {
        printf("짝수\n");
        } else {
            printf("홀수\n");
        }
    }

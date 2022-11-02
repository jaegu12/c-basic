#include <stdio.h>

// i=1 → J= * 
// i=2 → J= **
// i=3 → J= ***
// i=4 → J= ****
// i=5 → J= *****
int main(void) {
    // 1. 5번 반복
    for(int i=1; i<=5; i++) {
    // 2. 별의 갯수를 반복
    for(int J=0; J<i; J++) {
        printf("*");
    }
    printf("\n");
    }
    

}
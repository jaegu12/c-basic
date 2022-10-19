#include <stdio.h>

int main(void) {
    int num1 = 20, num2 = 10, num3 = 50;
    int temp;
    // 정렬: num1 > num2 > num3
    // num1 < num2 → 값 교환 : num1 > num2
    // num1 < num3 → 값 교환 : num1 > num2, num3
    // num2 < num3 → 값 교환 : num2 > num3
    // → num2 > num2> num3
    // 코드 ---
        // 체인지 코드 작성!!!
        
    if(num1 < num2) {
        temp = num1;
        num1 = num2;
        num2 = temp;
    }
    if(num1 < num3) {
        temp = num1;
        num1 = num3;
        num3 = temp;
    }
    if(num2 < num3) {
        temp = num2;
        num2 = num3;
        num3 = temp;
    }
    
    printf("%d > %d > %d", num1, num2, num3); 
    

    
}
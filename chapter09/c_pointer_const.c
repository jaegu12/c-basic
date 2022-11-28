#include <stdio.h>

/**
 * 변수: 값을 저장
 * 포인터(변수): 주소를 저장
 * 변수 앞에 *붙이면 포인터로 인식
 * 
 * int num = 4;   #99번지
 * int *pn; = &num;
 * 
 * num  → 4
 * &num → 99번지
 * pn   → 99번지
 * *pn  → 4
 * 
 * 변수 앞에 const → 상수(값을 고정)
 * 포인터 변수 앞에 const를 붙이면?
*/

int main(void) {
    int a=10, b=20;      // a(21번지), b(22번지)
    const int *pa = &a;  // 21번지

    printf("변수 a 값: %d\n", *pa);
    pa = &b;
    printf("변수 a값: %d\n", *pa);
    pa = &a;
    a = 20;
    *pa = 50;  //
    printf("변수 a값: %d\n", *pa);
}
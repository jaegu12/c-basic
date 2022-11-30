#include <stdio.h>

/**
 *  포인터(Pointer)와 배역(Araay)
 *   - 
*/
int main(void) {
    int ary[3];  // 배열 선언(3칸) 크기: 12Byte
    int i;       // 변수           크기: 4Byte

    *(ary + 0) = 10;
    *(ary + 1) = *(ary + 0) + 10;

    puts("3번재 배열 요소 입력: ");
    scanf("%d", ary + 2);

    for(i=0; i<3; i++) {
        printf("%d\n", *(ary+i));
    }

}
#include <stdio.h>

/**
 *  배열며와 포인터의 차이
*/
int main(void) {
    int ary[3] = {10, 20 ,30};
    int *pa = ary;
    printf("배열의 값: ");
    for(int i=0; i<3; i++) {
        printf("%d\n", *pa);
        pa++;
    }
}
#include <stdio.h>

/**
 *  ������(Pointer)�� �迪(Araay)
 *   - 
*/
int main(void) {
    int ary[3];  // �迭 ����(3ĭ) ũ��: 12Byte
    int i;       // ����           ũ��: 4Byte

    *(ary + 0) = 10;
    *(ary + 1) = *(ary + 0) + 10;

    puts("3���� �迭 ��� �Է�: ");
    scanf("%d", ary + 2);

    for(i=0; i<3; i++) {
        printf("%d\n", *(ary+i));
    }

}
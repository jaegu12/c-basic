#include <stdio.h>

/**
 *  �迭��� �������� ����
*/
int main(void) {
    int ary[3] = {10, 20 ,30};
    int *pa = ary;
    printf("�迭�� ��: ");
    for(int i=0; i<3; i++) {
        printf("%d\n", *pa);
        pa++;
    }
}
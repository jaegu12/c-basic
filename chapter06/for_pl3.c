#include <stdio.h>

//1~10���� ���� ���� ¦���� ¦����� Ȧ���� Ȧ�� ���
int main(void) {
    for(int i=1; i<=10; i++) 
        // if(0) ���ڳ��� false
        // if(1) �� True
        if(i % 2) {
        printf("¦��\n");
        } else {
            printf("Ȧ��\n");
        }
    }

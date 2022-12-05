#include <stdio.h>

int main(void) {
    int sum = 0;
    int n;
    printf("ют╥б: ");
    scanf("%d", &n);
    for(int i=0; i<n; i++){
        sum = sum + 1;
        printf("%d\n", sum);
    }

}
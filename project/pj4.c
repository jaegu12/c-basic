#include <stdio.h>

int main(void) {
int ary[7];

ary[0] = 1;
ary[1] = 1;
printf("1 1");

for(int i=0; i<5; i++) {
    ary[i+2] = ary[i+1] + ary[i];
    printf(" %d", ary[i+2]);
}
}
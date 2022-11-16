#include <stdio.h>

int main(void) {
    int result;
    result = func(19);
    printf("Result = %d\n", result);
}

int func(int n) {
    if(n % 2 == 1) n = n-1;
    if(n == 0) return 0;
    return (func(n-2)+n);
}
/**
 * func(19)
 *   бщ
 * n=18, func(16) + 18 #76+18=90
 *   бщ
 * n=16, func(14) + 16 #56+16=72
 *   бщ
 * n=14, func(12) + 14 #42+14=56
 *   бщ
 * n=12, func(10) + 12 #30+12=42
 *   бщ
 * n=10, func(8) + 10 #20+10=30
   * бщ
 * n=8, func(6) + 8  12+8=20
 *   бщ
 * n=6, func(4) + 6  #6+6=12
 *   бщ
 * n=4, func(2) + 4  # 2+4=6
 *   бщ
 * n=2, func(0) + 2  # 0+2=2
 *   бщ
 * n=0, 0
*/
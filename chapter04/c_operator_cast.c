// casting: ����ȯ
//  - int(����) �� double(�Ǽ�)

#include <stdio.h>

int main(void) {
    int a =20, b= 3;
    double res;

    // 6.7 =20.0 / 3.0

    res =(double)a / (double)b;
    printf("a = %d, b = %d\n", a, b);
    printf("a/b�� ��� : %.1lf\n", res);

    a = (int)res;
    printf("(int) %.1lf�� ���: %d\n", res, a);
}
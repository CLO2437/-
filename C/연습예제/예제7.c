//7. 50 ������ �ڿ����� �Է¹ް�, ������������ ����ϱ�

#include <stdio.h>
#include <stdlib.h>

void f(int b)
{
    if (b >= 1) {
        printf("%d\n", b);
        f(b - 1);
    }
}

int scanprint(void)
{
    int a;
    printf("number : ");
    scanf("%d", &a);
    return a;
}

int main(void)
{
    int n;

    n = scanprint();

    if (n <= 50 && n >= 1) {
        f(n);
    }
    else {
        printf("\nenter the natural number smaller than 50\n");
    }
    return 0;
}
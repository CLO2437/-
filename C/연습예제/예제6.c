//6. ������ ���̰� r�� ������ ����ϱ�
 
#include <stdio.h>
#include <stdlib.h>

int r = 0; double s = 0;

int Cir(int a)
{
    s = a * a * 3.1415926535897932;//384626433832795;
    return s;
}

int main(void)
{
    printf("r�� �Է��ϼ��� : ");
    scanf("%d", &r);
    Cir(r);
    printf("%lf", s);
    return 0;
}
//4. ������ a�ܺ��� b�ܱ��� ����ϱ�

#include <stdio.h>
#include <stdlib.h> 

int main(void)
{

    int i; int j; int a; int b;

    printf("������! a�ܺ��� b�ܱ���!\n\n");
    printf(" a�� : ");
    scanf("%d", &a);
    printf(" b�� : ");
    scanf("%d", &b);

    if (a >= b) {
        printf("b�� a���ٴ� Ŀ�� �մϴ�!");
    }
    else {
        for (i = a; i <= b; i++) {
            printf("\n%d�� : \n", i);
            for (j = 1; j <= 9; j++) {
                printf("%d*%d=%d\n", i, j, i * j);
            }
            printf("\n\n");
        }

    }
    return 0;
}
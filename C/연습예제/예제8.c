//8. 100 ������ �ڿ����� �Է¹ް�, 1���� �� �ڿ��������� ���� ����ϱ�

#include <stdio.h>
#include <stdlib.h>

//# 4�� 16�� 100������ �ڿ����� �Է¹޾� 1������ ���� ����ϴ� �Լ�

int scan(void) //������ �Է¹޴� �Լ�
{
    int enter;

    printf("number : ");
    scanf("%d", &enter);

    return enter;
}

void intprint(int print) //������ ������ ����ϴ� �Լ�
{
    printf("\n%d\n", print);
}

int numsize(int min, int max, int num) //���� ������ �����ϴ� �Լ�
{
    if (min <= num && num <= max) {
        return 1;
    }
    else {
        return 2;
    }
}

int f(int n)
{
    int slc;
    slc = numsize(1, 100, n);
    if (slc == 1) {
        n += f(n - 1);
        //printf("\n%d\n", n);
        return n;
    }
    else return 0;
}

int main()
{
    int n;
    n = scan();
    intprint(f(n));
    return 0;
}
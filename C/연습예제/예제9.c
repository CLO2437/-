//9. �ڿ��� N�� �Է¹ް� ¦���̸� 2, Ȧ���̸� 3���� ������ �۾��� �ݺ�, 1�� �Ǹ� ���� Ƚ�� ���
 
#include <stdio.h>
#include <stdlib.h>

//# 4�� 16�� 100�� ������ �ڿ��� N�� �Է¹޾� ¦���̸� 2�� Ȧ���̸� 3���� ������ �۾��� �ݺ��ϴٰ� �� ���� 1�� �Ǹ� �׶����� �������� �۾��� Ƚ���� ����ϴ� ���α׷��� �����Ͻÿ�.

int scan(void) //������ �Է¹޴� �Լ�
{
    int enter;

    printf("number : ");
    scanf("%d", &enter);

    return enter;
}

void intprint(int print) //������ ������ ����ϴ� �Լ�
{
    printf("\nresult : %d\n", print);
    return 0;
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
    int slc = numsize(2, 1000000, n);     //���� ������ ����
    if (slc == 1) {
        /*if(n%2==0){     //¦���̸�
            return 1 + f(n/2);
        }
        else{   //Ȧ���̸�
            return 1 + f(n/3);
        }*/
        return 1 + f(n / ((n % 2 == 0) ? 2 : 3)); //���׿����� ��� -> (����)?(���϶�):(�����϶�)
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
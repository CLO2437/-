//12. �̸�, ��ȭ��ȣ, �ּҸ� ���ڿ��� �Է¹޾� ������ �迭�� �����ϰ� ����ϱ�
 
#include <stdio.h>
#include <stdlib.h>

struct info
{
    char name[100];
    char number[100];
    char city[100];
};

int main(void)
{
    struct info a;
    printf("�̸�, ��ȭ��ȣ, �ּҸ� �Է��ϼ��� : ");
    scanf("%s %s %s", a.name, a.number, a.city);
    printf("�̸� : %s\n", a.name);
    printf("��ȭ��ȣ : %s\n", a.number);
    printf("�ּ� : %s\n", a.city);

    return 0;
}
//3. �Է¹��� ������ �������� ������� �Ǻ��ϱ�

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n = 0;

    printf("���� n�� �Է��ϼ���. �����Ϸ��� 0�� �Է��ϼ���.");

    do {
        printf("\n\nn : ");
        scanf("%d", &n);
        if (n > 0)
            printf("%d��(��) ����Դϴ�.\n", (int)n);
        else if (n < 0)
            printf("%d��(��) �����Դϴ�.\n", (int)n);
    } while (n != 0);
    printf("���α׷��� �����մϴ�.");
    return 0;
}
//2. �ڿ����� �Է¹޴ٰ� 100 �̻��� ���� �ԷµǸ� ��հ� �� ����ϱ�

#include <stdio.h>
#include <stdlib.h>

//��� n���� �Է¹޴ٰ� 100�̻��� ���� �Է¹����� �հ� ����� ����Ѵ�.

int main()
{
    int n; int sum = 0; int time = 1;
    do {
        printf("\n%d : ", time);
        scanf("%d", &n);
        sum += n;
        time++;
        printf("\n%d times you entered, now %d, sum is %d\n", time - 1, n, sum);
    } while (n < 100);
    printf("\nsum is %d\n", sum);
    printf("everage is %.1f\n", (float)sum / (time - 1));
    return 0;

}
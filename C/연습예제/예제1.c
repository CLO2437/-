//1. 1���� n���� Ȧ���� ���, ¦���� �� ���ϱ�
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int n; int i = 0; int sum = 0;

	printf("100 ������ ������ �Է��ϼ��� : ");
	scanf("%d", &n);

	for (i = 0; i <= n; i++) {
		if ((i % 2) == 0) {
			sum = sum + i;
		}
	}
	printf("\n\n¦���� ���� %d", sum);

	sum = 0;

	for (i = 1; i <= n; i++) {
		if ((i % 2) != 0) {
			sum += i;
			sum /= (n / 2);
		}
	}
	printf("\n\nȦ���� ����� %d\n\n", sum);

	return 0;
}

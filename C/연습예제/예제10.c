//10. �迭�� �Է¹ް� �迭 ���� �� ¦��, Ȧ���� ���� ����ϱ�
 
#include <stdio.h>
#include <stdlib.h>

int scanint(void)
{
    int size;

    printf("size of arr : ");
    scanf("%d", &size);

    return size;
}

void scanarr(int* arr, int size)
{
    int i;

    for (i = 0; i < size; i++) {
        printf("arr[%d] : ", i);
        scanf("%d", arr + i);
    }
}

void f(int* arr, int* even, int size)
{
    int i;

    for (i = 0; i < size; i++) {
        if (!(*(arr + i) % 2))
            (*even)++;
    }
}

int main(void)
{
    int even = 0; int size = scanint();

    int arr[size];

    scanarr(arr, size);
    f(arr, &even, size);

    printf("\neven : %d\nodd : %d", even, size - even);

    return 0;
}
//5. ũ�Ⱑ 100�� �迭�� ���ʷ� �Է¹޴ٰ� 0�� �ԷµǸ� �ݴ� ������ �迭 ����ϱ�

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i = 0;
    int arr[100] = {};

    for (i = 0; i < 100; i++) {
        printf("int arr[%d] : ", i);
        scanf("%d", &arr[i]);

        if (arr[i] == 0) {
            break;
        }
    }


    for (i += 1; i >= 0; i--) {
        printf("arr[%d] = %d", i, arr[i]);
    }

    return 0;
}
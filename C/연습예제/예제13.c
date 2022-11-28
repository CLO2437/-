//13. �� �簢���� ������ ��ǩ���� ���� �Է¹ް�, �� �簢���� ��ġ�� ������ �� �簢���� �����ϴ� �ּ��� �簢���� ��ǩ���� ���

/** �������� ���� Ǯ�� ��� �����  / 171037 2PAC ��ȣ�� **/

#include <stdio.h>
#include <stdlib.h>
#include <windows.h> //���� ����ϴ� �Լ�
#include <conio.h> //���� ����ϴ� �Լ�

//��������  sqi�� �ϰ� x, y�� ���������� ���� ����ü ����
typedef struct {
    int x;
    int y;
}sqi;

/** ���� �Լ� **/
int main(int argc, char* argv[]) {

    //����ü ���� ����(�簢�� A, B ���� �� ����(���簢���� �����ϱ� ���� �ּ� ��ǥ))
    sqi a_one, a_two, b_one, b_two;

    //x, y ��ǥ ������ ���� x, y 4ĭ¥�� �迭 ����
    int arr_x[4]; int arr_y[4];

    //x, y �Է¹���
    printf("enter x, y\nenter x (space) y ex) 3 4\n");
    printf("first point of squar one : ");
    scanf("%d %d", &a_one.x, &a_one.y);
    printf("second point of squar one : ");
    scanf("%d %d", &a_two.x, &a_two.y);
    printf("first point of squar two : ");
    scanf("%d %d", &b_one.x, &b_one.y);
    printf("second point of squar two : ");
    scanf("%d %d", &b_two.x, &b_two.y);

    //�Է� ���� x, y�� ��ǥ���� ���ʴ�� ���� ���� �迭�� ����
    arr_x[0] = a_one.x; arr_x[1] = a_two.x; arr_x[2] = b_one.x; arr_x[3] = b_two.x;
    arr_y[0] = a_one.y; arr_y[1] = a_two.y; arr_y[2] = b_one.y; arr_y[3] = b_two.y;

    //������ ���� temp ����(�ӽ� ����)�� ũ��, ���� ��� ���� x, y�� ù ��° ��ǥ ���� �־���
    int temp_x = arr_x[0]; int temp_y = arr_y[0];

    //�ݺ��� ���� i, j ���� �׸��� x, y�� �ּ�, �ִ븦 ������ ���� ����
    int i, j; int minx, miny, maxx, maxy, temp;

    //x����(temp�� �ϳ��� ���ذ��� ���� �� �۰� ū ���� ����)
    for (i = 0; i < 4; i++)
    {
        for (j = i; j < 4; j++)
        {
            if (arr_x[i] > arr_x[j])
            {
                temp = arr_x[i];
                arr_x[i] = arr_x[j];
                arr_x[j] = temp;
            }
        }
    }

    //y����(temp�� �ϳ��� ���ذ��� ���� �� �۰� ū ���� ����)
    for (i = 0; i < 4; i++)
    {
        for (j = i; j < 4; j++)
        {
            if (arr_y[i] > arr_y[j])
            {
                temp = arr_y[i];
                arr_y[i] = arr_y[j];
                arr_y[j] = temp;
            }
        }
    }

    //ũ������� ���ĵ� �迭���� �ִ�, �ּҰ��� ������ ����
    minx = arr_x[0];
    maxx = arr_x[3];
    miny = arr_y[0];
    maxy = arr_y[3];

    /** ��ġ�� �κ� ��� **/

    //j�� y��ǥ �ݺ��Ͽ� ����(y�� �ִ�+2���� 0����)
    for (j = maxy + 2; j >= 0; j--) {
        //i�� x��ǥ �ݺ��Ͽ� ����(0���� x�� �ִ�+3����)
        for (i = 0; i < maxx + 3; i++) {
            //���� ���� ����Ű�� �ִ� ��ǥ(j, i)�� �� �簢�� ���� �ȿ� �ִٸ� ��ġ�� ������ ó��
            if ((i >= a_one.x && i <= a_two.x && j >= a_one.y && j <= a_two.y) && (i >= b_one.x && i <= b_two.x && j >= b_one.y && j <= b_two.y)) {
                //���������� ���� ���
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_RED | FOREGROUND_INTENSITY);
                printf("��");
            }
            //���� ���� ����Ű�� �ִ� ��ǥ(j, i)�� �� �簢�� ���� �ȿ��� �ִٸ� �� �簢�� ������ ó��
            else if (i >= a_one.x && i <= a_two.x && j >= a_one.y && j <= a_two.y) {

                //��������� ���� ���
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_INTENSITY);
                printf("��");
            }

            else if (i >= b_one.x && i <= b_two.x && j >= b_one.y && j <= b_two.y) {

                //�ʷϻ����� ���� ���
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_GREEN | FOREGROUND_INTENSITY);
                printf("��");
            }

            //���� ���� ����Ű�� �ִ� ��ǥ(j, i)�� ��� �簢�� �������� ���ԵǾ� ���� �ʴٸ�
            else {
                //������� ���� ���
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE | FOREGROUND_INTENSITY);
                printf("��");
            }
        }
        //�ش� y��ǥ ���ο��� x��ǥ�� �ݺ��� ������ ���͸� �ļ� ���� y��ǥ(y-1)�� �Ѿ
        printf("\n");
    }

    /** �����ϴ� �ּ� ũ���� �簢�� ��� **/

    //x, y ������ �ּҰ�, �ִ밪 ��ǥ�� ���
    printf("points of the squar is (%d, %d), (%d, %d)", minx, miny, maxx, maxy); printf("\n");

    //j�� y��ǥ �ݺ��Ͽ� ����(y�� �ִ�+2���� 0����)
    for (j = maxy + 2; j >= 0; j--) {
        //i�� x��ǥ �ݺ��Ͽ� ����(0���� x�� �ִ�+3����)
        for (i = 0; i < maxx + 3; i++) {
            //���� ���� ����Ű�� �ִ� ��ǥ(j, i)�� �ּ�, �ִ� ������ ����ִٸ�
            if (i >= minx && i <= maxx && j >= miny && j <= maxy) {
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_BLUE | FOREGROUND_INTENSITY);
                printf("��");
            }
            else {
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE | FOREGROUND_INTENSITY);
                printf("��");
            }
        }
        printf("\n");
    }

    //���� �Լ� ����
    return 0;
}
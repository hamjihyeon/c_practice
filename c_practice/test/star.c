// ǥ�� �Է����� �ﰢ���� ���̰� �Էµ˴ϴ�(�Է� ���� ������ 3~10). 
// �Էµ� ���̸�ŭ �� ������� ���� ����ϴ� ���α׷��� ���弼��(scanf �Լ� ȣ�� ���� ���ڿ��� ����ϸ� �� �˴ϴ�). 
// �̶� ��� ����� ������ ��Ȯ�� ��ġ�ؾ� �մϴ�. 
// ����� ������ �����̳� �� ���� �� ���� Ʋ�� ������ ó���˴ϴ�.

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

    int height;
    int i = 0;
    int j = 0;

    printf("�Ƕ�̵��� ���̸� �����ּ��� >> ");
    scanf("%d", &height);

    for (int i = 0; i < height; i++) {

        for (int j = 0; j < 2 * height - 1; j++) {

            if ((j + i >= height - 1) && (j - i <= height - 1))
                printf("*");
            else
                printf(" ");
        }

        printf("\n");

    }    

    return 0;
}
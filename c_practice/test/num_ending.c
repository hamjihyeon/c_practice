// ǥ�� �Է����� ���� �� ���� �Էµ˴ϴ�
// (ù ��° �Է� ���� ������ 1~200, �� ��° �Է� ���� ������ 10~200�̸� ù ��° �Է� ���� �� ��° �Է� ������ �׻� �۽��ϴ�). 
// ���� �ҽ� �ڵ带 �ϼ��Ͽ� ù ��° ������ �� ��° ���� ������ ���� �� 7�� ������ �ʴ� ���ڰ� ��µǰ� ���弼��.

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    int num1;
    int num2;
    int i;

    printf("���� �� �� �Է����ּ��� >> ");
    scanf("%d %d", &num1, &num2);
    
    i = num1;

    while (1)
    {
        if (i % 10 == 7) {
            i++;
            continue;
        }

        if (i > num2)
            break;
                
        printf("%d ", i);
        i++;
    }

    return 0;
}
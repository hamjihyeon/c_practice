#include <stdio.h>
 
int main()
{
    // else if��
    // �߰�ȣ ��������
    // ��, printf�� 2���̻��̸� �ȵ�
    int num1 = 5;
 
    if (num1 == 10)
    {
        printf("10�Դϴ�.\n");
    }
    else    // if�� ���ǽ��� �������� ���� �� �ڵ带 ����
    {
        printf("10�� �ƴմϴ�.\n");    // num1�� 10�� �ƴϹǷ� "10�� �ƴմϴ�."�� ��µ�
    }
    printf("\n");

    if (2)    // 0�� �ƴϹǷ� ��
        printf("��\n");
    else
        printf("����\n");
    printf("\n");

    if (0)    // 0�̹Ƿ� ����
        printf("��\n");
    else
        printf("����\n");
    printf("\n");

    // ���ǽ� ������ ����
    int num2 = 10;
    int num3 = 20;

    printf("���ǽ� ������ ����\n");
    if (num2 == 10 && num3 == 20)    // num1�� 10�̸鼭 num2�� 20�� ��
        printf("��\n");
    else
        printf("����\n");
    return 0;
}

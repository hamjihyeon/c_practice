#include <stdio.h>
 
int main()
{
    // �� ������
    int num1 = 10;
    
    printf("�� ������\n");
    printf("%d\n", num1 == 10);    // 1: num1�� 10�� ������
    printf("%d\n", num1 != 5);     // 1: num1�� 5�� �ٸ���
 
    printf("%d\n", num1 > 10);     // 0: num1�� 10���� ū��
    printf("%d\n", num1 < 10);     // 0: num1�� 10���� ������
 
    printf("%d\n", num1 >= 10);    // 1: num1�� 10���� ũ�ų� ������
    printf("%d\n", num1 <= 10);    // 1: num1�� 10���� �۰ų� ������
    printf("\n");

    // ���� ������
    int num2 = 5;
    int num3;
 
    num3 = num2 ? 100 : 200;    // num2�� ���̸� num3�� 100�� �Ҵ�, �����̸� num3�� 200�� �Ҵ�
    // if (num2)          // num2�� ���̸� 
    //     num3 = 100;    // num3�� 100�� �Ҵ�
    // else               // num2�� �����̸�
    //     num3 = 200;    // num3�� 200�� �Ҵ�

    
    printf("���� ������\n");
    printf("%d\n", num3); // 100: num1�� 5�̹Ƿ� ��. num2���� 100�� �Ҵ��
    printf("\n");

    // if���� �� ������ �Բ� ���
    int num4 = 10;
 
    printf("if���� �� ������ �Բ� ���\n");
    if (num4 == 10)    // num4�� 10�� ������ �˻�
        printf("10�Դϴ�.\n");
 
    if (num4 != 5)     // num4�� 5�� �ٸ��� �˻�
        printf("5�� �ƴմϴ�.\n");
 
    if (num4 > 10)     // num4�� 10���� ū�� �˻�
        printf("10���� Ů�ϴ�.\n");
 
    if (num4 < 10)     // num4�� 10���� ������ �˻�
        printf("10���� �۽��ϴ�.\n");
 
    if (num4 >= 10)    // num4�� 10���� ũ�ų� ������ �˻�
        printf("10���� ũ�ų� �����ϴ�.\n");
 
    if (num4 <= 10)    // num4�� 10���� �۰ų� ������ �˻�
        printf("10���� �۰ų� �����ϴ�.\n");
    printf("\n");

    // �Ǽ�, ���ڿ� �񱳿����� ���
    float num5 = 0.1f;
    char c1 = 'a';
    
    printf("�Ǽ�, ���ڿ� �� ������ �Բ� ���\n");
    if (num5 >= 0.09f)   // num5�� �Ǽ� 0.09���� ũ�ų� ������ �˻�
        printf("0.09���� ũ�ų� �����ϴ�.\n");
 
    if (c1 == 'a')       // c1�� ���� a�� ������ �˻�
        printf("a�Դϴ�.\n");
 
    if (c1 == 97)        // c1�� ���� 97�� ������ �˻�
        printf("97�Դϴ�.\n");
 
    if (c1 < 'b')        // c1�� ���� b���� ������ �˻�
        printf("b���� �۽��ϴ�.\n");
    printf("\n");
 
    // �Լ� �ȿ��� ���� ������ ���
    int num6 = 5;

    printf("�Լ� �ȿ��� ���� ������ ���\n");
    printf("%s\n", num6 == 10 ? "10�Դϴ�." : "10�� �ƴմϴ�."); // num6�� 5�̹Ƿ� "10�� �ƴմϴ�."
    printf("\n");

    
    return 0;
}
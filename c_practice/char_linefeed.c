#include <stdio.h>

int main()
{
    // ���� ���� ����ϱ�
    char c1 = 'a';           // ���� a �Ҵ�
    char c2 = 'b';           // ���� b �Ҵ� 
    char lineFeed = '\n';    // ���� ���� \n �Ҵ�

    printf("����ڷ� ���\n");
    printf("%c%c%c%c", c1, lineFeed, c2, lineFeed);    // ���� ���ڵ� %c�� ����� �� ����
    printf("\n�ƽ�Ű�ڵ�� ���\n");
    printf("%d 0x%x\n", lineFeed, lineFeed);    // 10 0xa: ���� ������ ASCII �ڵ� ���

    return 0;
}
#include <stdio.h>

int main()
{
    // �����÷ο�� ����÷ο�

	char num20 = 128;             // char�� ������ �� �ִ� �ִ� 127���� ū ���� �Ҵ� -> �����÷ο� �߻�

	unsigned char num21 = 256;    // unsigned char�� ������ �� �ִ� �ִ� 255���� ū ���� �Ҵ� -> �����÷ο� �߻�

	printf("�����÷ο�\n");
	printf("%d %u\n", num20, num21);    // -128 0: ������ �� �ִ� ������ �Ѿ�Ƿ� �ּڰ����� �ٽ� ����
	printf("\n");

    return 0;
}
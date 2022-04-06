#include <stdio.h>
#include <limits.h>    // �ڷ����� �ִ񰪰� �ּڰ��� ���ǵ� ��� ����

int main()
{
    // �ڷ����� �ּڰ�
	char num1 = CHAR_MIN;          // char�� �ּڰ�
	short num2 = SHRT_MIN;         // short�� �ּڰ�
	int num3 = INT_MIN;            // int�� �ּڰ�
	long num4 = LONG_MIN;          // long�� �ּڰ�
	long long num5 = LLONG_MIN;    // long long�� �ּڰ�

	printf("�ڷ��� �ּڰ�\n");
	printf("%d %d %d %ld %lld\n", num1, num2, num3, num4, num5);
	// -128 -32768 -2147483648 -2147483648 -9223372036854775808
	printf("\n");

	// �ڷ����� �ִ�
	char num6 = CHAR_MAX + 1;          // char�� �ִ񰪺��� ū ���� �Ҵ�. �����÷ο� �߻�
	short num7 = SHRT_MAX + 1;         // short�� �ִ񰪺��� ū ���� �Ҵ�. �����÷ο� �߻�
	int num8 = INT_MAX + 1;            // int�� �ִ񰪺��� ū ���� �Ҵ�. �����÷ο� �߻�
	long long num9 = LLONG_MAX + 1;    // long long�� �ִ񰪺��� ū ���� �Ҵ�. �����÷ο� �߻�

	// ��ȣ �ִ� �������� ������ �� �ִ� ������ �Ѿ�� �ּڰ����� �ٽ� ����
	printf("��ȣ�ִ� ���� �����÷ο� -> �ּڰ����� ����\n");
	printf("%d %d %d %lld\n", num6, num7, num8, num9);
	// -128 -32768 -2147483648 -9223372036854775808
    printf("\n");

	unsigned char num10 = UCHAR_MAX + 1;          // unsigned char�� �ִ񰪺��� ū ���� �Ҵ� �����÷ο� �߻�
	unsigned short num11 = USHRT_MAX + 1;         // unsigned short�� �ִ񰪺��� ū ���� �Ҵ� �����÷ο� �߻�
	unsigned int num12 = UINT_MAX + 1;            // unsigned int�� �ִ񰪺��� ū ���� �Ҵ� �����÷ο� �߻�
	unsigned long long num13 = ULLONG_MAX + 1;    // unsigned long long�� �ִ񰪺��� ū ���� �Ҵ� �����÷ο� �߻�
	// unsigned char, unsigned short, unsigned int�� %u�� ����ϰ� 
	// unsigned long long�� %llu�� ���
	// ��ȣ ���� �������� ������ �� �ִ� ������ �Ѿ�� �ּڰ� 0���� �ٽ� ����
    printf("��ȣ���� ���� �����÷ο� -> �ּڰ� 0���� ����\n");
	printf("%u %u %u %llu\n", num10, num11, num12, num13); // 0 0 0 0
    printf("\n");

	char num14 = CHAR_MIN - 1;          // char�� �ּڰ����� ���� ���� �Ҵ�. ����÷ο� �߻�
	short num15 = SHRT_MIN - 1;         // short�� �ּڰ����� ���� ���� �Ҵ�. ����÷ο� �߻�
	int num16 = INT_MIN - 1;            // int�� �ּڰ����� ���� ���� �Ҵ�. ����÷ο� �߻�
	long long num17 = LLONG_MIN - 1;    // long long�� �ּڰ����� ���� ���� �Ҵ�. ����÷ο� �߻�
	// ��ȣ �ִ� �������� �ּڰ����� �۾����� �ִ񰪺��� �ٽ� ����
    printf("��ȣ�ִ� ���� ����÷ο� -> �ִ񰪺��� ����\n");
	printf("%d %d %d %lld\n", num14, num15, num16, num17); // 127 32767 2147483647 9223372036854775807
    printf("\n");

	unsigned char num18 = 0 - 1;         // unsigned char�� �ּڰ����� ���� ���� �Ҵ� ����÷ο� �߻�
	unsigned short num19 = 0 - 1;        // unsigned short�� �ּڰ����� ���� ���� �Ҵ� ����÷ο� �߻�
	unsigned int num20 = 0 - 1;          // unsigned int�� �ּڰ����� ���� ���� �Ҵ� ����÷ο� �߻�
	unsigned long long num21 = 0 - 1;    // unsigned long long�� �ּڰ����� ���� ���� �Ҵ� ����÷ο� �߻�
	// ��ȣ ���� �������� �ּڰ����� �۾����� �ִ񰪺��� �ٽ� ����
    printf("��ȣ���� ���� ����÷ο� -> �ִ񰪺��� ����\n");
	printf("%u %u %u %llu\n", num18, num19, num20, num21);
	// 255 65535 4294967295 18446744073709551615
	printf("\n");

    return 0;
}
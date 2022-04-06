#include <stdio.h>

int main() {

    // �Ǽ��� ���� �����ϱ�
	float num1 = 0.1f;               // �����е� �ε��Ҽ��� ������ �����ϰ� ���� �Ҵ�
									 // float�� ���� �ڿ� f�� ����
	double num2 = 3867.215820;       // �����е� �ε��Ҽ��� ������ �����ϰ� ���� �Ҵ�
									 // double�� ���� �ڿ� �ƹ��͵� ������ ����
	long double num3 = 9.327513l;    // �����е� �ε��Ҽ��� ������ �����ϰ� ���� �Ҵ�
									 // long double�� ���� �ڿ� l�� ����

	// float�� double�� %f�� ���, long double�� %Lf�� ���
	printf("�Ǽ��� ���� �����ϱ�\n");
	printf("%f %f %Lf\n", num1, num2, num3);    // 0.100000 3867.215820 9.327513
	printf("\n");
    // ���� ǥ���
	float num4 = 3.e5f;             // ���� ǥ������� 300000�� ǥ��
									// float�� ���� �ڿ� f�� ����
	double num5 = -1.3827e-2;       // ���� ǥ������� -0.013827�� ǥ��
									// double�� ���� �ڿ� �ƹ��͵� ������ ����
	long double num6 = 5.21e+9l;    // ���� ǥ������� 5210000000�� ǥ��
									// long double�� ���� �ڿ� l�� ����

	// float�� double�� %f�� ���, long double�� %Lf�� ���
	printf("���� ǥ���\n");
	printf("%f %f %Lf\n", num4, num5, num6); // 300000.000000 -0.013827 5210000000.000000

	// ���� ǥ������� ����� ���� float�� double�� %e�� ���, long double�� %Le�� ���
	printf("%e %e %Le\n", num4, num5, num6); // 3.000000e+05 -1.382700e-02 5.210000e+09
	printf("\n");

	// �Ǽ� �ڷ��� ũ�� ���ϱ�
	float num7 = 0.0f;
	double num8 = 0.0;
	long double num9 = 0.0l;

	printf("�Ǽ� �ڷ��� ũ��\n");
	printf("float: %d, double: %d, long double: %d\n",
		sizeof(num7),     // 4: sizeof�� float ������ �ڷ��� ũ�⸦ ����
		sizeof(num8),     // 8: sizeof�� double ������ �ڷ��� ũ�⸦ ����
		sizeof(num9)      // 8: sizeof�� long double ������ �ڷ��� ũ�⸦ ����
	);
	printf("\n");
    return 0;
}
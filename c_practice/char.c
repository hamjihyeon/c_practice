#include <stdio.h>

int main() {

    // ���� ���� �����ϱ�
    char c1 = 'a';    // ���� ������ �����ϰ� ���� a�� ����
    //char c1 = 97;
    //char c1 = 0x61;
    char c2 = 'b';    // ���� ������ �����ϰ� ���� b�� ����
    //char c2 = 98;
    //char c2 = 0x62
 
    // char�� %c�� ����ϸ� ���ڰ� ��µǰ�, %d�� ����ϸ� �������� ��µ�
    printf("����, �ƽ�Ű�ڵ�, 16���� ���\n");
    printf("%c, %d, 0x%x\n", c1, c1, c1);    // a, 97: a�� ASCII �ڵ尪�� 97
    printf("%c, %d, 0x%x\n", c2, c2, c2);    // b, 98: b�� ASCII �ڵ尪�� 98

    return 0;
}
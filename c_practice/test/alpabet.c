// ǥ�� �Է����� ���� �ϳ��� �Էµ˴ϴ�. 
// �Էµ� ���ں��� z���� ������� ����ϴ� ���α׷��� ���弼��(scanf �Լ� ȣ�� ���� ���ڿ��� ����ϸ� �� �˴ϴ�).

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    
    char c;

    scanf("%c", &c);

    while(c<='z') {
        printf("%c", c);
        c++;
    }

    return 0;
}
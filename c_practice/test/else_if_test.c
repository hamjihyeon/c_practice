// ǥ�� �Է����� ���ڰ� �Էµ˴ϴ�. 
// �Էµ� ���ڰ� a�̸� "a�Դϴ�."�� ����ϰ�, a�� �ƴϸ� "a�� �ƴմϴ�."�� ����ϴ� ���α׷��� ���弼��
// (scanf �Լ� ȣ�� ���� ���ڿ��� ����ϸ� �� �˴ϴ�).

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
    
    char c;

    printf("���ڸ� �Է��ϼ��� >> ");
    scanf("%c", &c);

    if(c == 'a') 
        printf("a�Դϴ�.\n");
    
    else 
        printf("a�� �ƴմϴ�.\n");

    return 0;
    
}
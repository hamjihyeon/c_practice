#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// ǥ�� �Է����� �� ������ ���� �ϳ��� �Էµ˴ϴ�. 
// �Էµ� ������ �� �ڸ����� �������� ����ϴ� ���α׷��� ���弼��(scanf �Լ� ���� ���ڿ��� ����ϸ� �� �˴ϴ�). 
// ���� ��� 43561�̶�� 1 6 5 3 4�� ����ϸ� �˴ϴ�. 
// �� �ڸ����� �������� ��켼��.

int main(void)
{
    int num;
    int count;
    
    printf("������ �Է��ϼ��� >> ");
    scanf("%d",&num);
    
    count = num%10;
    num/=10;
    printf("%d ",count);
    
    count = num%10;
    num/=10;
    printf("%d ",count);
    
    count = num%10;
    num/=10;
    printf("%d ",count);
    
    count = num%10;
    num/=10;
    printf("%d ",count);
    
    printf("%d",num);
 
    return 0;
}
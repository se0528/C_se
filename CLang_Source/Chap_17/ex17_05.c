#include <stdio.h>

#define swap1(a) (a * a)       // ��ũ�� �Լ� ����
#define swap2(a) ((a) * (a))   // �Ű������� ��ȣ�� ó��

int main(void)
{
	int num;

	printf(" ���� �Է� : ");
	scanf_s("%d", &num);

	printf("\n ��ȣ ���� %d�� ������ %d\n", num, swap1(num));
	printf(" ��ȣ �ִ� %d�� ������ %d\n", num, swap2(num));
	printf("\n ��ȣ ���� (%d+5)�� ������ %3d\n", num, swap1(num + 5));
	printf(" ��ȣ �ִ� (%d+5)�� ������ %3d\n", num, swap2(num + 5));
	return 0;
}
#include <stdio.h>
#include "sum.h"

int main(void)
{
	int su1, su2, result;
	printf(" ù ��° ���� �Է� : ");
	scanf_s("%d", &su1);
	printf(" �� ��° ���� �Է� : ");
	scanf_s("%d", &su2);

	result = sum(su1, su2);
	printf(" ���� ��� : %d + %d = %d\n", su1, su2, result);
	return 0;
}
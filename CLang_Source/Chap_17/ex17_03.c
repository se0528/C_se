#include <stdio.h>

#define S 1            // ��ũ�� ��� ����
#define E 100

int main(void)
{
	int cnt, hap = 0;

	for (cnt = S; cnt <= E; cnt += 2)
		hap += cnt;

	printf(" %d���� %d���� Ȧ���� �� : %d\n", S, E, hap);
	return 0;
}
#include <stdio.h>

#define MAX 50        // ��ũ�� ��� ����

int main(void)
{
	int cnt, hap = 0;

	for (cnt = 1; cnt <= MAX; cnt++)
		hap += cnt;

	printf(" 1���� %d���� ���� %d\n", MAX, hap);

#undef MAX         // ��ũ�� ��� ���� ���
#define MAX 100    // ��ũ�� ��� �ٽ� ����

	printf(" ��ũ�� ��� �� ������ \n");

	hap = 0;
	for (cnt = 1; cnt <= MAX; cnt++)
		hap += cnt;

	printf(" 1���� %d���� ���� %d\n", MAX, hap);
	return 0;
}
#include <stdio.h>

#define MAX 50         // ��ũ�� ��� ����

int main(void)
{
	int cnt, hap = 0;

	for (cnt = 1; cnt <= MAX; cnt++)
		hap += cnt;

	printf(" >> 1���� %d������ �� .... [ %3d ] \n\n", MAX, hap);

#undef MAX            // �տ��� ������ ��ũ�� ���
#define MAX 100       // ��ũ�� ��� ������

	printf(" <<<<< ��ũ�� ��� �� ������ >>>>> \n\n");

	hap = 0;
	for (cnt = 1; cnt <= MAX; cnt++)
		hap += cnt;

	printf(" >> 1���� %d������ �� ... [ %3d ] \n", MAX, hap);
	return 0;
}
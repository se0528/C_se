#include <stdio.h>

int main(void)
{
	int cnt, hap = 0, num;
	float avg;

#ifndef MAX          // ���ǵ� ��ũ�ΰ� ���� ��츦 ������ �Ǵ� 
#define MAX 3        // ��ũ�� ���ǰ� �����Ƿ� ��ũ�� ����
#endif

	for (cnt = 1; cnt <= MAX; cnt++)
	{
		printf(" >> %d��° ���� ���� : ", cnt);
		scanf_s("%d", &num);
		hap += num;
	}

	avg = (float)hap / MAX;

	printf(" >> ���� ....... [ %5d ] \n", hap);
	printf(" >> ��� ....... [ %.2f ] \n", avg);
	return 0;
}
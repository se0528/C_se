#include <stdio.h>

int main(void)
{
	int cnt, hap = 0, num;

	printf(" 3���� ������ ���ʴ�� �Է��Ͻÿ�. \n");

#ifndef MAX          // ���ǵ� ��ũ�ΰ� ���� ��� ������ �Ǵ� 
#define MAX 3        // ��ũ�� ���ǰ� �����Ƿ� ��ũ�� ��� ����
#endif

	for (cnt = 1; cnt <= MAX; cnt++)
	{
		printf(" %d��° ���� : ", cnt);
		scanf_s("%d", &num);
		hap += num;
	}
	printf(" 3�� ������ ���� %d\n", hap);
	return 0;
}
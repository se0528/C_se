#include <stdio.h>

int main(void)
{
	int cnt, hap = 0, num;

#ifdef MULTI                            // ��ũ�ΰ� ���ǵǾ� ������ ������ �Ǵ�
	num = 3;
#else                                   // ��ũ�ΰ� ���ǵǾ� ���� ���� ��� 
	num = 5;
#endif

	for (cnt = 1; cnt <= 100; cnt++)
		if (cnt % num == 0)            // ����� ����
			hap += cnt;

	printf(" 1���� 100���� %d�� ��� ���� %d\n", num, hap);
	return 0;
}
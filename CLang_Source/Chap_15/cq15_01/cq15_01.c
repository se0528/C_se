#include <stdio.h>

int main(void)
{
	int num;
	FILE *fp;
	errno_t err;

	err = fopen_s(&fp, "data.txt", "rt");  // �б� ���� �ؽ�Ʈ ���� ����

	if (NULL != fp)    // ���� ���⸦ ������ ���
	{
		printf(" >> data.txt ���� ���� ���� !! \n");

		while (EOF != fscanf_s(fp, "%d", &num))
		{
			printf(" %d ", num);
		}
		fclose(fp);
	}
	else            // ���� ���⸦ ������ ���
		printf(" >> ���� ���� ���� !! \n");

	return 0;
}
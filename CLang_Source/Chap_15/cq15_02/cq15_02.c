#include <stdio.h>

int main(void)
{
	FILE *fp;
	errno_t err;

	err = fopen_s(&fp, "smile.txt", "wt");  // ���� ���� �ؽ�Ʈ ���� ����

	if (NULL != fp)    // ���� ���⸦ ������ ���
	{
		fprintf(fp, "�ȳ��ϼ���. \n");
		fprintf(fp, "������ ������ �ູ�� �����մϴ�. \n");

		printf(" >> ���ο� smile.txt ���� : ���� �Ϸ� \n");
		printf(" >> ������ ���� ��ġ : �ҽ� �ڵ�� ������ ���͸�\n");
		printf(" >> smile.txt ���� �ȿ� ���� Ȯ�� \n");

		fclose(fp);
	}
	else            // ���� ���⸦ ������ ���
		printf(" >> ���� ���� ���� !! \n");

	return 0;
}
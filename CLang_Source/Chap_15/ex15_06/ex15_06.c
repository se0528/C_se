#include <stdio.h>

int main(void)
{
	char sts[50];
	int cnt;
	FILE *foc = NULL;      // FILE�� ����ü ������ ���� ����
	errno_t err;           // errno_t�� typedef �Ǿ� �ִ� ������ Ÿ������ �������� �����

	err = fopen_s(&foc, "save.txt", "w");  // ������ ������ ���� �����Ͽ� ���� w ���� 

	if (err == 0)
	{
		printf(" save.txt ���� ���� �Ϸ� \n");
		printf(" 1.���ڿ� �Է� : ");
		gets_s(sts, sizeof(sts));     // ���ڿ��� �Է� ����

		printf(" 2.���Ͽ� �� ���� : %s\n", sts);

		for (cnt = 0; sts[cnt] != NULL; cnt++)
			fputc(sts[cnt], foc);    // ����� ���ڿ��� 1���� �о ������ ���Ͽ� ���

		fclose(foc);
		printf(" save.txt ���� �ݱ� ���� \n");
	}
	else
		printf(" save.txt ���� ���� ���� \n");

	return 0;
}
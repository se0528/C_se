#include <stdio.h>

int main(void)
{
	int f_size;
	FILE* fb;
	errno_t err;

	err = fopen_s(&fb, "binary.dat", "rb");  // �б� ���� ���̳ʸ� ���� ����

	if (NULL != fb)                          // ���� ���⸦ ������ ���
	{
		printf(" ���̳ʸ� ���� ���� ���� \n");

		fseek(fb, 0, SEEK_END);              // ������ ������ �̵�
		f_size = ftell(fb);                  // ������ ���� ��ġ���� ������ ũ�⸦ ����   
		printf(" ���� ũ�� : %d����Ʈ \n", f_size);

		fclose(fb);
	}
	else                                    // ���� ���⸦ ������ ���
		printf(" ���̳ʸ� ���� ���� ���� \n");

	return 0;
}
#include <stdio.h>

#define INPUT 2           // ���� ���ǹ����� ã�� ���� ��ȣ ��� ����

int main(void)
{
	int num;

	printf(" ���� 1, 2, 3�� �� �ϳ��� �Է��Ͻÿ�. \n");
	printf(" ���� �Է� : ");
	scanf_s("%d", &num);

	if (num == INPUT)
	{
      #if INPUT == 1
		printf(" ã�ҽ��ϴ�. ��ũ�� ��� : INPUT %d \n", num);

      #elif INPUT == 2
		printf(" ã�ҽ��ϴ�. ��ũ�� ��� : INPUT %d \n", num);

      #elif INPUT == 3
		printf("  ã�ҽ��ϴ�. ��ũ�� ��� : INPUT %d \n", num);

      #else
		printf(" ���α׷��� �����մϴ�. \n");
      #endif
	}
	else if (num > 3 || num <= 0)
		printf(" ��ȿ�� ���ڰ� �ƴմϴ�. \n");
	else
		printf(" ��ũ�� ����� ã�� ���߽��ϴ�. \n");
	return 0;
}
#include <stdio.h>
#include <ctype.h>              // isupper( )�Լ��� tolower( ) �Լ� ����� ���� ����

int main(void)
{
	char op;                    // ���ĺ� �Է� ����
	int input;                  // ���α׷� ���� ���� ����

	do
	{
		printf(" ���α׷� ����(����� 99) : ");
		scanf_s("%d", &input);

		if (input == 99)        // Ű����� 99�� �ԷµǸ� �ݺ��� Ż�� �� ���α׷� ����
			break;
		getchar();              // ����Ű ����

		printf(" ���ĺ� �Է� : ");
		scanf_s("%c", &op, sizeof(op));

		if (isupper(op))         // ���ĺ� �빮�ڸ� �Ǵ��ϴ� �Լ�
			op = tolower(op);    // ���ĺ� �빮�� �� �ҹ��ڷ� ��ȯ �Լ�

		else if (islower(op))    // ���ĺ� �ҹ��ڸ� �Ǵ��ϴ� �Լ�
			op = toupper(op);    // ���ĺ� �ҹ��� �� �빮�ڷ� ��ȯ �Լ�

		printf(" ��� ���� ��ȯ : %c \n\n", op);
		getchar();      // ����Ű ����
	} while (1);

	printf(" ���α׷��� �����մϴ�. \n");
	return 0;
}
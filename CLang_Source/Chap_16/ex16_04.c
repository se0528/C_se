#include <stdio.h>
#include <stdlib.h>

typedef struct student {
	char title[30];   // ���� �̸�
	int score;        // ��û ����
} ST;

int main(void)
{
	ST* t_zone;       // ���� �޸� ������ ����Ű�� ������
	int max, cnt, sum = 0;

	printf(" ��û ���� �� �Է� : ");
	scanf_s("%d", &max);

	if (max < 0)
	{
		printf(" ���� ������ ������� �ʽ��ϴ�. \n");
		exit(1);
	}

	getchar();                                // ����Ű ����
	t_zone = (ST*)malloc(sizeof(ST) * max);   // ���� �޸� �Ҵ�

	if (t_zone == NULL)
	{
		printf(" >> ���� �޸� �Ҵ� ���� �߻� !! ");
		exit(1);    // ������ ����
	}

	for (cnt = 0; cnt < max; cnt++)
	{
		printf(" ��û ���� : ");
		gets_s(t_zone[cnt].title, sizeof(t_zone[cnt].title));

		printf(" ��û ���� : ");
		scanf_s("%d", &(t_zone[cnt].score));

		getchar();                          // ����Ű ����
		sum += t_zone[cnt].score;
	}
	printf("\n ��û�� ���� \t\t ���� \n");

	for (cnt = 0; cnt < max; cnt++)
		printf(" %s \t\t %3d \n", t_zone[cnt].title, t_zone[cnt].score);

	printf(" ��û�� �� ������ %d\n", sum);

	free(t_zone);                           // �Ҵ�� ���� �޸� ���� ����
	return 0;
}
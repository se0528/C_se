#include <stdio.h>
#include <stdlib.h>

typedef struct student {
	char title[20];   // ���� �̸�
	int score;        // ��û ����
} ST;

int main(void)
{
	ST *t_zone;      // ���� �޸� ������ ����Ű�� ������
	int cnt, sum = 0;

	t_zone = (ST*)malloc(sizeof(ST) * 2);   // ���� �޸� �Ҵ�

	if (t_zone == NULL)
	{
		printf(" >> ���� �޸� �Ҵ� ���� �߻� !! ");
		exit(1);    // ������ ����
	}

	printf(" >> ��û ���� : ");
	gets_s(t_zone[0].title, sizeof(t_zone[0].title));

	printf(" >> ��û ���� : ");
	scanf_s("%d", &(t_zone[1].score));

	printf(" >> %s %d������ ��û�Ͽ����ϴ�. \n", t_zone[0].title, t_zone[1].score);

	free(t_zone);     // �Ҵ�� ���� �޸� ���� ����
	return 0;
}
#include <stdio.h>
#include <stdlib.h>    
#include <string.h>             // strcpy_s( ) �Լ� ���� ����

struct STD
{
	int sno;
	char name[12];
	char dept[30];
};

int main(void)
{
	int cnt;
	struct STD *p;

	p = (struct STD*)malloc(3 * sizeof(struct STD));  // ���� �޸� �Ҵ�

	if (p == NULL)
	{
		printf(" >> ���� �޸� �Ҵ� ���� �߻� !! \n");
		exit(1);               // ���α׷� ����(��ȣ ���� 1�� ������ ���Ḧ �ǹ�)
	}

	/*-- ���� �޸� ��� --*/
	p[0].sno = 20231235;
	strcpy_s(p[0].name, sizeof(p[0].name), "ȫ�浿");
	strcpy_s(p[0].dept, sizeof(p[0].dept), "���а�");

	p[1].sno = 20250008;
	strcpy_s(p[1].name, sizeof(p[1].name), "�̼���");
	strcpy_s(p[1].dept, sizeof(p[1].dept), "�ؾ��а�");

	for (cnt = 0; cnt < 2; cnt++)
	{
		printf(" �й� : %d\n", p[cnt].sno);
		printf(" ���� : %s\n", p[cnt].name);
		printf(" �а� : %s\n\n", p[cnt].dept);
	}

	free(p);    // ���� �޸� �ݳ�
	return 0;
}
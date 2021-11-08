#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define SIZE 20

typedef struct NODE {           // NODE �ڷ��� ����
	char name[SIZE];
	int age;
	struct NODE* link;          // �ڱ� ���� ����ü ����
} NODE;

int main(void)
{
	NODE* list = NULL;         // list�� �ʱ갪�� �ݵ�� NULL ������ ����
	NODE* p_prev = NULL, * p, * p_next;  //p_prev�� �ʱ갪�� �ݵ�� NULL�� ����
	char buffer[SIZE];
	int age;

	/*- ���� ����Ʈ ���� -*/
	while (1)
	{
		printf("\n ���� �Է�(�׳� ����ġ�� ����) : ");
		gets_s(buffer, SIZE);     // �ٹٲ� ���ڸ� NULL ���ڷ� ��ȯ�Ͽ� ��ȯ
		if (buffer[0] == '\0')    // ������ �Է����� �ʰ� [����]Ű�� ���� ���
			break;                // �ݺ����� �������� ���α׷� ����

		/*- ���� �޸� �Ҵ� -*/
		p = (NODE*)malloc(sizeof(NODE));
		// �������� ������ ����ü�� �ּҸ� ��ȯ�ϰ� �� �ּҸ� ������ p�� ����

		strcpy_s(p->name, sizeof(p->name), buffer);  // ���ڿ� ���� �Լ� ���
		printf(" ���� �Է� : ");
		gets_s(buffer, SIZE);
		age = atoi(buffer);      // atoi( ) �Լ��� �Է¹��� ���ڿ��� ������ ��ȯ
		p->age = age;

		if (list == NULL)        // ����Ʈ�� ������� ���
			list = p;            // ���ο� ��带 ù ��° ���� ����
		else                     // ����Ʈ�� ������� ���� ���
			p_prev->link = p;    // ���ο� ��带 ���� ����� ��ũ �ʵ忡 ����

		p->link = NULL;          // ���ο� ����� ��ũ �ʵ带 NULL�� ����
		p_prev = p;              // ���� ��带 ���� ���� ���� ����
	}

	/*- ���� ����Ʈ�� ����ִ� ������ ��� -*/
	p = list;
	while (p != NULL)
	{
		printf("[ %s, %d ]", p->name, p->age);
		p = p->link;

		if (p != NULL)
			printf(" -> ");
	}

	/*- �Ҵ�� ���� �޸� �ݳ� -*/
	p = list;
	while (p != NULL)
	{
		p_next = p->link;
		free(p);
		p = p_next;
	}
	return 0;
}
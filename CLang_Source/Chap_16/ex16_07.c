#include <stdio.h>
#include <stdlib.h>

#define SIZE 50           // ������ �Է¹��� ũ�� ����

typedef struct data {     // ���ο� DATA Ÿ�� ����
	char name[SIZE];
	int sno;
}DATA;

typedef struct node {    // ���ο� NODE Ÿ�� ����
	DATA data;
	struct NODE *link;
}NODE;

/*- ����� ���� �Լ� ���� -*/
NODE *insert_node(NODE *plist, NODE *pprev, DATA item);
void display_menu();
int get_selectde_menu();
DATA get_input();
void print_list(NODE* plist);
void destroy_nodes(NODE* plist);
void end_display();

int main(void)
{
	NODE *plist = NULL;
	int selected = 0;
	DATA d;

	while (selected != 3)
	{
		display_menu();
		selected = get_selectde_menu();           // Ű���� �Է°��� ���� �Լ� ȣ��

		switch (selected)
		{
		case 1:
			d = get_input();
			plist = insert_node(plist, NULL, d);  // ����� ���� �Լ� ȣ��
			printf(" �л� ���� �Է� �Ϸ� \n\n");
			break;
		case 2:
			print_list(plist);                    // ����� ���� �Լ� ȣ��
			printf(" �л� ���� ��� �Ϸ� !! \n\n");
			break;
		case 3:
			destroy_nodes(plist);                // ����� ���� �Լ� ȣ��
			end_display();                       // ����� ���� �Լ� ȣ��
			break;
		}
	}
	return 0;
}

/*- ���� �޸� �Ҵ�� ��� ���� ����� �Լ� ���� -*/
NODE *insert_node(NODE *plist, NODE *pprev, DATA item)
{
	NODE *pnew = NULL;
	if (!(pnew = (NODE*)malloc(sizeof(NODE))))
	{
		printf("�޸� ���� �Ҵ� ���� �߻� !! \n");
		exit(1);
	}

	pnew->data = item;
	if (pprev == NULL)
	{
		pnew->link = plist;
		plist = pnew;
	}
	else
	{
		pnew->link = pprev->link;
		pprev->link = pnew;
	}
	return plist;
}

/*- ȭ�鿡 �����ִ� �޴��� ����ϴ� ����� ���� �Լ� -*/
void display_menu()
{
	printf(" �л� ���� ���� �޴� \n");
	printf(" 1.�л� ���� �߰�\n");
	printf(" 2.�л� ���� ���\n");
	printf(" 3.����\n");
}

/*- ������ ��ȣ�� ������ �ִ� ����� ���� �Լ� -*/
int get_selectde_menu()
{
	int selmenu = 0;
	printf(" ��ȣ ���� : ");
	scanf_s("%d", &selmenu);
	getchar();
	return selmenu;
}

/*- �л��� ������ �Է¹޴� ����� ���� �Լ� -*/
DATA get_input()
{
	DATA input;
	printf("\n �й� �Է� : ");
	scanf_s("%d", &input.sno);
	getchar();
	printf(" ���� �Է� : ");
	gets_s(input.name, sizeof(input.name));
	return input;
}

/*- �Է��� �л��� ������ ����ϴ� ����� ���� �Լ� -*/
void print_list(NODE* plist)
{
	NODE *ptr;
	for (ptr = plist; ptr; ptr = ptr->link)
	{
		printf("\n �й� : %d\n", ptr->data.sno);
		printf(" ���� : %s\n", ptr->data.name);
	}
}

/*- �Ҵ�� ���� �޸𸮸� �����ϴ� ����� ���� �Լ� -*/
void destroy_nodes(NODE *plist)
{
	NODE *temp;
	while (plist)
	{
		temp = plist;
		plist = plist->link;
		free(temp);
	}
}

/*- ���α׷� ���� �޽��� ��� ����� ���� �Լ� -*/
void end_display()
{
	printf(" ���α׷� ���� \n");
}
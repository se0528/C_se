#include <stdio.h>
#include <stdlib.h>    //malloc( ) �Լ��� free( ) �Լ� ���� ����

int main(void)
{
	int cnt;     //�ݺ����� ī��Ʈ ����
	int *score;  //�����͸� �����Ͽ� ���� �޸��� �ּҷ� ���
	score = (int*)malloc(2 * sizeof(int));  // ���� �޸� �Ҵ�

	if (score == NULL)
	{
		printf(" >> ���� �޸� �Ҵ� ���� �߻� !! \n");
		exit(1);     // ���α׷� ����(��ȣ ���� 1�� ������ ���Ḧ �ǹ�)
	}

	/*-- ���� �޸� ��� --*/
	score[0] = 97;
	score[1] = 88;

	for (cnt = 0; cnt < 2; cnt++)
		printf(" >> %d��° ���� : [ %d ] \n", cnt + 1, score[cnt]);

	free(score);       // ���� �޸� �ݳ�
	return 0;
}
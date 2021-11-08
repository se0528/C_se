#include <stdio.h>
#include <stdlib.h>       // malloc( ) �Լ��� free( ) �Լ� ���� ����

int main(void)
{
	int cnt, std, sum = 0; 
	int *score;           // �����͸� �����Ͽ� ���� �޸��� �ּҷ� ���
	float avg = 0.0;

	printf(" �л��� �Է� : ");
	scanf_s("%d", &std);

	score = (int*)malloc(std * sizeof(int));  // ���� �޸� �Ҵ�

	if (score == NULL)
	{
		printf(" >> ���� �޸� �Ҵ� ���� �߻� !! \n");
		exit(1);        // ���α׷� ����(��ȣ ���� 1�� ������ ���Ḧ �ǹ�)
	}

	/*-- ���� �޸� ��� --*/
	for (cnt = 0; cnt < std; cnt++)
	{
		printf(" �л� # %d-%d ���� �Է� : ", std, cnt + 1);
		scanf_s("%d", &score[cnt]);
		sum += score[cnt];
	}

	printf(" ���� : %d\n\n", sum);

	for (cnt = 0; cnt < std; cnt++)
	{
		printf(" �л� # %d-%d ���� ��� : %d\n", std, cnt + 1, score[cnt]);
	}

	avg = (float)sum / std;
	printf(" ��� ���� : %.2f\n", avg);

	free(score);    // ���� �޸� �ݳ�
	return 0;
}
#include <stdio.h>

#define PI 3.141592            // ��ũ�� ��� ����
#define AREA PI * r * r        // ��ũ�� Ȯ���� �� �� �߻�

int main(void)
{
	float r;     // ���� �ݵ�� r�� ����ؾ� ��(��ũ�� ��� ����)

	printf(" ������ �Է� : ");
	scanf_s("%f", &r);

	printf(" ���� ���� : %f\n", AREA);
	return 0;
}
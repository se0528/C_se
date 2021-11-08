#include <stdio.h>

int main(void)
{
	int score[5];
	int count;

	for (count = 0; count < 5; count++){
		printf("%d\n", score[count]);
		score[count] = count*count;
		printf("%d\n", score[count]);
		// 또는 for(count = 1; count <= 5; count++)
	}
	
	return 0;
}
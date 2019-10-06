#include<stdio.h>
#include<stdlib.h>

int main() {
	/*
	printf("\n    *    \n");
	printf("   ***   \n");
	printf("  *****  \n");
	printf(" ******* \n");
	printf("*********\n\n\n");
	*/

	int r, c;

	char DisplayPyramid[5][9] = {
	{' ',' ',' ',' ','*',' ',' ',' ',' '},
	{' ',' ',' ','*','*','*',' ',' ',' '},
	{' ',' ','*','*','*','*','*',' ',' '},
	{' ','*','*','*','*','*','*','*',' '},
	{'*','*','*','*','*','*','*','*','*'}
	};

	for (c = 0; c < 5; c++) {
		for (r = 0; r < 9; r++) {
			printf("%c", DisplayPyramid[c][r]);
			//printf("%d %d", c, r);
				if (r == 8)
					printf("\n");
		}
	}
	printf("\n");
	system("pause");
	return 0;

}
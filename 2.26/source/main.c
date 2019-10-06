#include<stdio.h>
#include<stdlib.h>



int main() {

	int enterN1, enterN2,x;

	printf("Enter two integers,and I will tell you whether the first number is multiple of the second:\n");
	while (scanf_s("%d %d", &enterN1, &enterN2) != EOF)
	{
		if (enterN1 % enterN2 == 0)
			printf("The first number is  multiple of the second\n\n");
		else
			printf("The first number is not multiple of the second\n\n");

		printf("Continue?(1=yes/0=no)\n");
		scanf_s("%d", &x);
		
		if (x == 1) {
			printf("\nContinue...\n");
			printf("Enter two integers,and I will tell you whether the first number is multiple of the second:\n");
		}
		else {
			system("pause");
			return 0;
		}
		
	}
	

	system("pause");
	return 0;

}
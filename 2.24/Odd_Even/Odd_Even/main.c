#include<stdio.h>
#include<stdlib.h>

int main() {

	int enterN;

	printf("Enter an integer,I will tell you that it is Odd or Even:\n");

	scanf_s("%d", &enterN);

	if (enterN % 2 == 0) {

		printf("The integer is Even\n");

	}
	else {

		printf("The integer is Odd\n");

	}

	system("pause");
	return 0;

}

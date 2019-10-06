#include<stdio.h>
#include<stdlib.h>
#include<math.h>


int main() {

	float n[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int count;

	printf("number\t square\t cube \n");

	for (count = 0; count < 10; count++) {
		printf("%.0f\t %.0f\t %.0f \n", n[count], pow(n[count], 2), pow(n[count], 3));
		}

	system("pause");
	return 0;

}
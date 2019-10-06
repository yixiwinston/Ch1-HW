#include<stdio.h>
#include<stdlib.h>

void caculate(int x, int y, int z, int L, int S);
void PrintJudge(int Max, int Min);

int main() {

	int enterN1, enterN2, enterN3,max = -1,min = -1;
	printf("Enter three Integers,I will tell you which oen is the largest and smallest:\n");

	scanf_s("%d %d %d", &enterN1, &enterN2, &enterN3);

	caculate(enterN1, enterN2, enterN3, max, min);

	system("pause");
	return 0;

}
void caculate(int x,int y,int z,int L,int S) {
	if (x >= y) {
		if (x >= z) {
			L = x;
			if (y >= z) {
				S = z;
			}
			else {
				S = y;
			}
		}
	}
	else if (y >= x) {
		if (y >= z) {
			L = y;
			if (x >= z) {
				S = z;
			}
			else {
				S = x;
			}
		}
	}
	else if (z >= y) {
		if (z >= x) {
			L = z;
			if (y >= x) {
				S = x;
			}
			else {
				S = y;
			}
		}
	}

	PrintJudge(L,S);

}
void PrintJudge(int Max,int Min) {

	printf("The largest integer you enter is %d\nThe smallest integer you enter is %d\n", Max , Min);

}
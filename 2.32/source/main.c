#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main() {

	float weight, height, BMI;
	int status;

	printf("Enter the height(m) and weight(kg):\n");

	scanf_s("%f %f", &height, &weight);

	BMI = weight / (pow(height, 2));

	printf("Your BMI is %.1f\n", BMI);
	
	if (BMI < 18.5)
		status = 0;
	else if (BMI < 25)
		status = 1;
	else if (BMI < 30)
		status = 2;
	else
		status = 3;

	switch (status) {
		case 0:
			printf("Your status:Underweight\n");
			break;
		case 1:
			printf("Your status:Normal\n");
			break;
		case 2:
			printf("Your status:Overweight\n");
			break;
		case 3:
			printf("Your status:Obese\n");
			break;
		default:
			break;
	}
	system("pause");
	return 0;

}
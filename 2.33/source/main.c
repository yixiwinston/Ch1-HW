#include<stdio.h>
#include<stdlib.h>

//�D�حn�D:�D�X�C���q��O

int main() {

	float mileage, Cost_perGas, average_MileperGas, ParkingFee, Toll;	//���{�ơB�C���ɨT�o��O�B�����C���ɨT�o��p�h���B�����O�B�L���O[Ex:etag]

	float TotalFee;

	printf("Please enter how long you drive per day? (Km)\t");
	scanf_s("%f",&mileage);

	printf("Please enter how much you cost per gas? (L)\t");
	scanf_s("%f", &Cost_perGas);

	printf("Please enter how long you drive per gas? (Km/L)\t");
	scanf_s("%f", &average_MileperGas);

	printf("Please enter how much is the parking fee per day?($)\t");
	scanf_s("%f", &ParkingFee);

	printf("Please enter how much is the toll per day?($)\t");
	scanf_s("%f", &Toll);

	TotalFee = ParkingFee + Toll;
	TotalFee = TotalFee + (Cost_perGas * average_MileperGas * mileage);
	printf("The total fee is %.2f $\n", TotalFee);


	system("pause");
	return 0;

}
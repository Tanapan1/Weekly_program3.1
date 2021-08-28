#include<stdio.h>

int main() {
	float popA, popB ;
	float grA, grB;
	int year = 0;
	printf("Population of A = ");
	scanf_s("%f", &popA);
	printf("Growth rate (%%) = ");
	scanf_s("%f", &grA);
	printf("Population of B = ");
	scanf_s("%f", &popB);
	printf("Growth rate (%%) = ");
	scanf_s("%f", &grB);
	printf("year %d, A = %.2f ,B = %.2f\n", year, popA, popB);
	do {
		year = year + 1;
		popA = popA * ((100 + grA) / 100);
		popB = popB * ((100 + grB) / 100);
		printf("year %d, A = %.2f ,B = %.2f\n", year, popA, popB);
	} while (popA <= popB);
	printf("Duration =   %d years", year);
	return 0;
}

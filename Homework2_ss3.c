#include<stdio.h>
int main(){
	float degreeC;
	printf("Moi ban nhap nhiet do hien tai (do C): ");
	scanf("%f",&degreeC);
	float  degreeK = (degreeC*9/5) + 32;
	printf ("Do K hien tai la: %f", degreeK);
	return 0; 
} 

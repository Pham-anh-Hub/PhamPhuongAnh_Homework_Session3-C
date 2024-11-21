#include<stdio.h>
int main(){
	float r;
	const float pi = 3.14;
 
	printf("Moi ban nhap ban kinh r: ");
	scanf("%f",&r);
	
	float circuit = 2*pi*r;
	float square = pi*r*r;
	 
	printf("\nChu vi hinh tron la: %.2f", circuit);
	printf("\nDien tich hinh tron do la: %.2f", square);
	return 0; 
	 
	 
} 

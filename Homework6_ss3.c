#include<stdio.h>
int main(){
	float a, h;
	printf("Moi ban nhap do dai canh tam giac: ");
	scanf("%f",&a);
	printf("\nChieu cao tam giac: ");
	scanf("%f",&h);
	float square = a*h*1/2;
	printf("\nDien tich tam giac la: %.2f", square);
	return 0; 
	
} 

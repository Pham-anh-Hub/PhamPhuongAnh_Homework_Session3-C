#include<stdio.h>
int main(){
	float toan, van, anh;
	printf("Moi ban nhap diem toan: ");
	scanf("%f",&toan);
	printf("Moi ban nhap diem van: ");
	scanf("%f",&van);
	printf("Moi ban nhap diem anh: ");
	scanf("%f",&anh);
	
	float total = toan + van + anh;
	float average = total/3;
	
	printf("Tong diem ba mon la: %.2f", total);
	printf("\nDiem trung binh la: %.2f", average);
	return 0; 
	
} 

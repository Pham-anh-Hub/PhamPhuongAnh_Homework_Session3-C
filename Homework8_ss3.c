#include<stdio.h>
int main(){
	int num;
	printf("Moi ban nhap so 4 chu so can dao nguoc: ");
	scanf("%d",&num);
	int nghin = num / 1000;
	int tram = num % 1000/100;
	int chuc = num % 100/10;
	int donvi = num % 10;
	printf("So sau khi dao nguoc la: %d %d %d %d",donvi, chuc, tram, nghin );
	return 0; 
	 
	 
} 

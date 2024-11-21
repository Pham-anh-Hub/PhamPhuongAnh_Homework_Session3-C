#include<stdio.h>
int main(){
	int num;
	printf("Moi ban nhap so co bon chu so ");
	scanf("%d",&num);
	int nghin = num /1000;
	int tram = num % 1000 /100;
	int chuc = num % 100 / 10;
	int donvi = num % 10;
	int total = nghin+tram+chuc+donvi; 
	printf("Tong cac chu so la: %d",total);
	return 0; 
} 

#include <stdio.h> // 3 say�n�n ortalamas�. 13.11.2020-Algoritma Dersi-1.�DEV-1.soru

int main (){
	
	int a, b, c, ort;
	
	printf("istediginiz 3 tam sayinin ortalamasini veren programa hosgeldiniz \n1. sayiyi giriniz: ");
	scanf("%d",&a);
	
	printf("2. sayiyi giriniz: ");
	scanf("%d",&b);
	
	printf("3. sayiyi giriniz: ");
	scanf("%d",&c);
	
	
	
	ort = (a+b+c)/3 ;
	
	printf("girdiniz sayilarin ortalamasi: %d ",ort);
	
	
	return 0;
}

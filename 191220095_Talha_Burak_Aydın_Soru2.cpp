#include <stdio.h> // Girilen sayýnýn basamaklarýný toplayan fonksiyon.24.12.2020-Algoritma Dersi-5.ÖDEV-2.soru
#include <conio.h>

int toplabsmk (int a){
	int toplam=0;
	
	while(a>0){
		toplam+=a%10;
		a/=10;}
		
return toplam;}

int main(){
	int sayi,sonuc;
	
	printf("Sayi giriniz...:\n");
	scanf("%d",&sayi);
	
	sonuc=toplabsmk(sayi);
	printf("Basamaklarin toplami -> %d",sonuc);
	
	getch();
	return 0;
}
 

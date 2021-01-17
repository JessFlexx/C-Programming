#include<stdio.h>  // A,B,C Dizisi olu�tur. A Ve B deki say�lar� Cye aktar. Cye aktar�rken b�y�kten k����e olacak �ekilde ekle.
#define MAX 20
#include<conio.h>
#include <stdlib.h>
#include <time.h>

void maximum(int *a,int *b, int *c){    // Kendi ba��ma yapamd���m i�in ba�ka bir kaynaktan bu fonksiyonu ald�m ve kulland�m.
    int k=0,temp1[2],temp2[2];     // Kendim yapmad��m i�in  fonksiyonu basamak basamak inceledim ve a��klamas�n� yazd�m.
    for(int i=0;i<20;i++){
        
		temp2[1]=temp2[0]=temp1[1]=temp1[0]=-99; 
        
		for(int j=0;j<10;j++)  // A dizisindeki en b�y�k say�y� ve hangi indexte oldu�unu buluyoruz.
		if(a[j]>temp1[0]){    // �ndexini bulmam�z�n nedeni say�y� C dizisine aktard�ktan sonra A dizisindeki de�erini de�i�tirmek.
		temp1[0]=a[j];
		temp1[1]=j;
		}
        
        for(int j=0;j<10;j++)  // B dizisindeki en b�y�k say�y� ve hangi indexte oldu�unu buluyoruz.
		if(b[j]>temp2[0]){    // �ndexini bulmam�z�n nedeni say�y� C dizisine aktard�ktan sonra B dizisindeki de�erini de�i�tirmek.
		temp2[0]=b[j];
		temp2[1]=j;
		} 
        
        if (temp2[0]>temp1[0]){//�kinci dizinin en b�y�k eleman� birinci dizideki en b�y�k say�dan b�y�kt�r anlam�na gelir.
		b[ temp2[1] ]=-100;   //Art�k C dizisine aktard���m�z i�in, B dizisindeki eleman� ��kar�yoruz.
		c[i]=temp2[0];       // ��karmak i�in -100 yaparak  for d�g�s�ndeki �art(a[j] ve ya b[j] < -99 )blo�una tak�lmamas�n� sa�l�yoruz, b�ylece g�r�nmez hale geliyor. 
		}
        else {
		a[ temp1[1] ]=-100;//Birinci dizinin en b�y�k eleman� ikinci dizideki en b�y�k say�dan b�y�kt�r anlam�na gelir.
		c[i]=temp1[0];    //Art�k C dizisine aktard���m�z i�in, A dizisindeki eleman� ��kar�yoruz.
		}                //��karmak i�in -100 yaparak  for d�g�s�ndeki �art(a[j] ve ya b[j] < -99 ) blo�una tak�lmamas�n� sa�l�yoruz, b�ylece g�r�nmez hale geliyor.  
    }    
}

int main(){
    int n=0,a[10],b[10],c[20];
    int *ap=a,*bp=b,*cp=c;
    
    srand(time(NULL));
    
    for(int i=0;i<10;i++){
        a[i]=rand()%100;
        b[i]=rand()%100;
    }
    
    for(int i=0;i<10;i++) 
	printf("A[%d]=%d\t",i+1,a[i]);
    printf("\n");
    
    for(int i=0;i<10;i++) 
	printf("B[%d]=%d\t",i+1,b[i]);
    printf("\n");  
	  
    maximum(ap,bp,cp); 
	   
    for(int i=0;i<20;i++) 
	printf("C[%d]=%d\n",i+1,c[i]); 
    printf("\n");

getch();
return 0;}


#include<stdio.h>  // A,B,C Dizisi oluþtur. A Ve B deki sayýlarý Cye aktar. Cye aktarýrken büyükten küçüðe olacak þekilde ekle.
#define MAX 20
#include<conio.h>
#include <stdlib.h>
#include <time.h>

void maximum(int *a,int *b, int *c){    // Kendi baþýma yapamdýðým için baþka bir kaynaktan bu fonksiyonu aldým ve kullandým.
    int k=0,temp1[2],temp2[2];     // Kendim yapmadðým için  fonksiyonu basamak basamak inceledim ve açýklamasýný yazdým.
    for(int i=0;i<20;i++){
        
		temp2[1]=temp2[0]=temp1[1]=temp1[0]=-99; 
        
		for(int j=0;j<10;j++)  // A dizisindeki en büyük sayýyý ve hangi indexte olduðunu buluyoruz.
		if(a[j]>temp1[0]){    // Ýndexini bulmamýzýn nedeni sayýyý C dizisine aktardýktan sonra A dizisindeki deðerini deðiþtirmek.
		temp1[0]=a[j];
		temp1[1]=j;
		}
        
        for(int j=0;j<10;j++)  // B dizisindeki en büyük sayýyý ve hangi indexte olduðunu buluyoruz.
		if(b[j]>temp2[0]){    // Ýndexini bulmamýzýn nedeni sayýyý C dizisine aktardýktan sonra B dizisindeki deðerini deðiþtirmek.
		temp2[0]=b[j];
		temp2[1]=j;
		} 
        
        if (temp2[0]>temp1[0]){//Ýkinci dizinin en büyük elemaný birinci dizideki en büyük sayýdan büyüktür anlamýna gelir.
		b[ temp2[1] ]=-100;   //Artýk C dizisine aktardýðýmýz için, B dizisindeki elemaný çýkarýyoruz.
		c[i]=temp2[0];       // Çýkarmak için -100 yaparak  for dögüsündeki þart(a[j] ve ya b[j] < -99 )bloðuna takýlmamasýný saðlýyoruz, böylece görünmez hale geliyor. 
		}
        else {
		a[ temp1[1] ]=-100;//Birinci dizinin en büyük elemaný ikinci dizideki en büyük sayýdan büyüktür anlamýna gelir.
		c[i]=temp1[0];    //Artýk C dizisine aktardýðýmýz için, A dizisindeki elemaný çýkarýyoruz.
		}                //Çýkarmak için -100 yaparak  for dögüsündeki þart(a[j] ve ya b[j] < -99 ) bloðuna takýlmamasýný saðlýyoruz, böylece görünmez hale geliyor.  
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


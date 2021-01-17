#include<stdio.h>   // Rnadom 100 sayýlýk veri oluþtur. Bu sayýlarýn en büyük, en küçük, sayýlarýn ortalamasý ve sayýlarýn standart sapmasýný bul.
#include<math.h>
#include<conio.h>
#include <time.h>
#include <stdlib.h>

struct sonuclar{
int buyuk;
int kucuk;
double ort;
double stspm;};

struct sonuclar sonuc(struct sonuclar son,int *numbs);

int main(){

struct sonuclar son; 
int numbs[100],a=0;
int *arr=numbs;
float temp=0; 
    
srand(time(NULL));
    
for(int i=0;i<100;i++){
     numbs[i]=rand()%100;
     temp+=numbs[i];
}
	
for(int i=0;i<100;i++){
     a+=pow(numbs[i]-son.ort,2);
}
	
a=(double)a/99;
son.stspm=sqrt(a);
    
son=sonuc(son,arr);    

printf("+En buyuk deger -> %d \n+En kucuk deger -> %d \n+Ortalama deger -> %f \n+Standart sapma sonucu -> %f\n",son.buyuk,son.kucuk,son.ort,son.stspm ); 

printf("\n### DATA ###\n");

for(int i=0;i<100;i++) {
     if(i%5==0) 
	 printf("\n");
     printf(" SAYI(%d) = %d\t",i+1,numbs[i]);
		
	} 
	
getch();
return 0;
}

struct sonuclar sonuc(struct sonuclar son,int *numbs){    
    
float a=0,temp=0;
int buyuk=numbs[0];
int kucuk=numbs[0];
double sonuc;
        
for(int i=0; i<100; i++){
    temp+=numbs[i];
    }   

    son.ort=temp/100;
    
for(int i=0;i<100;i++){
    if(numbs[i]>buyuk)buyuk=numbs[i];        
    if(numbs[i]<kucuk)kucuk=numbs[i];        
    }
son.kucuk=kucuk;
son.buyuk=buyuk;    
return son;
}
	


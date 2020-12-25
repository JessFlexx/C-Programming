#include <stdio.h>  //Girilen sayýlardan çift olanlarý toplayýp , en büyüðe bölen koddur. 11.12.2020-Algoritma Dersi-3.ÖDEV-1.soru
#include <conio.h>


int main() {
	
	int dizi[20],i,j,ebsayi,cifttoplam=0,gecici;
	float bolum;
	char k;
	
    printf("Girdiginiz 20 sayidan cift olanlarin toplamini en buyuk sayiya bolen programdir!\n");
	for(i=0;i<20;i++){
		
		printf("%d.Sayiyi giriniz:",i+1);
		scanf("%d",&dizi[i]);
		if(dizi[i]%2==0)
	    cifttoplam+=dizi[i];
	}
    ebsayi=dizi[0];
	for (int j=1;j<20;j++){
		if (dizi[j]>ebsayi) 
			ebsayi=dizi[j];
		}
            
    
	bolum=(float)cifttoplam/ebsayi;
	printf("Cift sayilarin toplami= %d en buyuk sayi= %d bolumu= %.2f ",cifttoplam,ebsayi,bolum);
	
	
	
getch();	    	
return 0;	    	
}
    
	
	
	


    


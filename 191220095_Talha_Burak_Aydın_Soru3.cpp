#include <stdio.h>      //A,B gibi iki sayý arasýnda 4 iþlem yapabilen koddur.
#include <conio.h>

int main() {
	
	int a, b, topsonuc, ciksonuc, carpsonuc, bolsonuc, secim, toplama, cikarma, bolme, carpma;
	
printf("ilk sayiyi giriniz: ");
scanf("%d" , &a);


printf("ikinci sayiyi giriniz: ");
scanf("%d" , &b);


printf("yapmak istediginiz islemin numarasini giriniz: \n Toplama icin:1 \n Cikarma icin:2 \n Carpma icin:3 \n Bolme icin:4 \n" );

scanf("%d" , &secim);

if (secim == 1){
	topsonuc = a + b;
	printf("sonuc:");
	printf("%d+%d=%d" ,a,b,topsonuc );
}
else if (secim == 2){
	ciksonuc = a - b;
	printf("sonuc:");
	printf("%d-%d=%d" ,a,b,ciksonuc );
}
else if (secim == 3){
	carpsonuc = a * b;
	printf("sonuc:");
	printf("%d*%d=%d" ,a,b,carpsonuc );
}
else if (secim == 4){
	if(b==0)
	printf("Sonuc: Tanimsizdir!");
	bolsonuc = a / b;
	printf("sonuc:");
	printf("%d/%d=%d" ,a,b,bolsonuc );
}
	

	
	return 0;
}

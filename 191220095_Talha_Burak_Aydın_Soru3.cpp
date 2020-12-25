#include<stdio.h> //Girilen harf küçükse büyüðe büyükse küçüðe çevirir.17.12.2020-Algoritma Dersi-4.ÖDEV-3.soru
int main(){
	int i=0,fark='a'-'A';
	char metin[100];
	printf("Bu program girdiginiz harf buyukse kucuge veya kucukse buyuge cevirir!\n\n");
	printf("Islemi uygulamak istedginiz kelime veya cumleyi giriniz:");
	gets(metin);
	
	while(metin[i]!= '\0'){
		if(metin[i]>='A' && metin[i]<='Z'){
			metin[i]+=fark;
		} else if(metin[i]>='a' && metin[i]<='z'){
			metin[i]-=fark;
		}
		printf("%c",metin[i]);
		i++;
	}
	return 0;
}

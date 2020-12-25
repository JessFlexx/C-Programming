#include<stdio.h>  // Girilen metinden kelime arayan koddur.17.12.2020-Algoritma Dersi-4.ÖDEV-2.soru
#include<conio.h>

int main(){
	int i,j,k=0,kontrol=0;
	
	char metin[1000];
	char kelime[20];
	
	printf("Girilen metindeki kelimeleri bulabileceginiz programdir!\n\n");
	
	printf("Metni giriniz :");
	gets(metin);
	
	printf("Metinde aramak istediginiz kelimeyi lutfen giriniz : ");
	gets(kelime);
	
	for(j=0; kelime[j]!='\0'; j++);
	
	for(i=0; metin[i]!='\0'; i++){
		if(metin[i]==kelime[k]){
			k++;
			if(k==j && metin[i+1]==' ')
			break;
			kontrol=1;
		}
		else{
			k=0;
		}
		
	}
	if(kontrol==1){
		
		printf("Kelimeniz metnin %d. karakterden sonra gelmektedir.",i-j);
		}
	else 
	printf(" '%s' kelimesi  metinde bulunamadi!",kelime);
	return 0;
}

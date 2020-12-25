#include <stdio.h>                           // Girilen metindeki kelime sayýsýný bulan koddur.17.12.2020-Algoritma Dersi-4.ÖDEV-1.soru
int kelimeSayisiBulucu(char *);
int kelimeSayisiBulucu(char *dizi) {
	int i=0;
	int kelimeSayisi=0;
	while (dizi[i]!='\0') {
		if(dizi[i]==' ')
		kelimeSayisi++;
		i++;
	}
	return kelimeSayisi+1;
}
int main() {
	char dizi[100];
	int kelimeSayisi=0;
	puts("Bir metin giriniz:");
	gets(dizi);
 	kelimeSayisi=kelimeSayisiBulucu(dizi);
	printf("Girdiginiz metin %d kelimeden olusmaktadir!", kelimeSayisi);
	return 0;
}

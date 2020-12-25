#include <stdio.h>  // Fonksiyon oluþturarak kombinasyon iþlemini uygular.24.12.2020-Algoritma Dersi-5.ÖDEV-1.soru
#include <conio.h>
#include <inttypes.h>

int Fktryl(int n){
    int i=1,f=1;
    while(i<=n){
        f*=i++;}
    return f;}

long long int Kmbnsyn(int x,int y){
     long long int sonuc;
     sonuc= (long long int)Fktryl(x)/(Fktryl(y)*Fktryl(x-y));
     return sonuc;
    }

int main() {
    int a,b;
    long long int c;

printf("Ilk sayi...:\n");
scanf("%d",&a);

printf("Ikinci sayi...:\n");
scanf("%d",&b);

c=Kmbnsyn(a,b);

printf("%d'nin %d'li kombinasyonu...:\n%lld",a,b,c); //Çok büyük sayýlar olmasada 1000'den sonraki sayýlarda çýktýyý doðru vermiyor, bu yüzden long long int kullandým.
                                                    //internette %lld ve #include <inttypes.h> kütüphanesi kullanýlmasý yazýlmýþ ama iþe yaramadý.
getch();
return 0;
}
 

#include <stdio.h>  // Fonksiyon olu�turarak kombinasyon i�lemini uygular.24.12.2020-Algoritma Dersi-5.�DEV-1.soru
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

printf("%d'nin %d'li kombinasyonu...:\n%lld",a,b,c); //�ok b�y�k say�lar olmasada 1000'den sonraki say�larda ��kt�y� do�ru vermiyor, bu y�zden long long int kulland�m.
                                                    //internette %lld ve #include <inttypes.h> k�t�phanesi kullan�lmas� yaz�lm�� ama i�e yaramad�.
getch();
return 0;
}
 

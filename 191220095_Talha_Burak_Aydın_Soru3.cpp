#include <stdio.h>  //Tek sayilarin geometrik , �ift say�lar�n aaritmetik ortalamas�n� alan programd�r. 13.11.2020-Algoritma Dersi-2.�DEV-3.soru
#include <stdlib.h>
#include <math.h>
#include <conio.h>
int main() {

    int tekCarpim,ciftToplam,sayi,z,Scift,Stek;;
    

    Scift = 0;
    Stek = 0;
    tekCarpim = 1;
    ciftToplam = 0;

    for(z=0; z < 4; z++){
    printf("Sayi giriniz:");
    scanf("%d",&sayi);

    if(sayi % 2 == 0){
        ciftToplam += sayi;
        Scift++;
    }

    else{
        tekCarpim *= sayi;
        Stek++;
    }
    }
    printf("Cift sayilarin aritmetik ortalamasi: %d\n",ciftToplam/Scift);
    printf("Tek sayilarin geometrik ortalamasi: %3.4f\n",pow(tekCarpim, (1.0/Stek)));

    getch();
    return 0;
}



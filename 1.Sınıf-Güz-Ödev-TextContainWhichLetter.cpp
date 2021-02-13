#include <stdio.h>  // Kullanıcıdan metin girdisi al.Hangi harften kaç tane girildiğini bul.
#include <stdlib.h>

int main(){

char metin[100],harf;
int k,i,count=0;

    puts("Bir Metin Giriniz: ");
    gets(metin);
    
 for(k=97;k<123;k++){
 harf=k;
        
 for(i=0;metin[i]!='\0';i++){
     if(metin[i]==harf) 
	 count++;
}
if(count>0)
printf("%c karakteri %d kere kullanilmistir.\n",harf,count);
     
harf=count=0; //Döngünün kontrol dğeişkenlerini sıfırlama
}

return 0;
}

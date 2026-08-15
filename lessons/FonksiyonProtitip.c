#include<stdio.h>

void hello(char[], int);//fonksiyon prototipi

int main()
{
   /* Fonksiyon Prototopi
   Nedir ?
    Body parti olmadan, main öncesine fonksiyon tanımlama
    Bir fonksiyon çağırırken doğru argümanların girilmesini sağlar

   Önemli Notlar
     Birçok C derleyicisi parametreleri kontrol etmez
     Eksik argümanlar beklenmeyen davranışlara neden olur
     Argümanlar eksikse derleyicinin bir hata vermesine neden olur 
   */

   char name[] = "Marjinal";
   int age = 20;

    hello(name, age);


    return 0;
}

void hello(char name[], int age)
{
    printf("\nMerhaba %s", name);//body part
    printf("\n%d yasindasin", age);//Body part
}

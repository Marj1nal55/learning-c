#include<stdio.h>

int main()
{
/* variable = Programlamama yapılırken verilen bir değeri bilgisyarın hafızasın da tutan 
ve iste diğimiz yerde kullaanmamızı sağlayan verilere denir.
Değişkenlere bir ism ve ne tür olduğunu beirtmemiz gerekmektedir.
*/

 int x; //Tanımlama
 x = 123;//Değer verme
 int y = 321;//Tanımama + Değer verme


 int level = 1;//Tam Sayılar
 float xp = 12.05;//Ondalık Sayılar
 char server = 'A';//Tek Karakter
 char nick[] = "MarjinaMate";//Karakter Dizisi


 printf("Merhaba %s\n", nick);//Karakter dizisi için %s kullanılır
 printf("Suan %d levele sahipsin\n", level);//Tam sayılar için %d KULLANILIR
 printf("Xp durumun %%%f\n", xp);//Ondalık Sayılar için %f kullanılır + Ekstra % koyabilmek için %%% kullanılır
 printf("%c Sunucusunda oynuyorsun", server);//Tek karakter için %c kullanılır


 return 0;

}
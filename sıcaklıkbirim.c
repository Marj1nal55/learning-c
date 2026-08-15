#include<stdio.h>
#include<ctype.h>
int main(){

    char unit;
    float temp;

   printf("\n   Sicaklik birimini giriniz (F) veya (C): ");
   scanf("%c", &unit);

   unit =toupper(unit);

   if(unit == 'C')
   {
      printf("\n Celcius cinsinden sicakligi giriniz: ");
      scanf("%f", &temp);
      temp = (temp * 9/5) + 32;
      printf("\n Sicaklik fahreneit cinsinden %1.f", temp);
   }
   else if (unit = 'F')
   {
     printf("\n  Fahreneit cinsinden sicakligi giriniz: ");
     scanf("%f", &temp);
     temp = ((temp -32) * 5)/9;
     printf("\n Sicaklik celcius cinsinden %1.f", temp);
   }
   else{
    printf("\n %c gecerli bir birim değil!", unit);
   }

    return 0;
}
#include<stdio.h>

int main()
{

   //Switch = else if yerine kullanabileceğimiz alternatif bir durumdur

   char grade;
   printf("\nNotunuzu giriniz: ");
   scanf("%c", &grade);

   switch (grade)
   {
    case 'A':
       printf("Mukemmel");
       break;
    case 'B':
       printf("Notun Basarili");
       break;
    case 'C':
       printf("Notun Iyi");   
       break;
    case 'D':
       printf("En Azindan F Degil");
       break;
    case 'F':
      printf("Basarisiz Oldun");
      break;  
    default:
      printf("Gecerli bir not giriniz!");
      break;
    }

   return 0;
}
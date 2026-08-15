#include<stdio.h>

int main()
{
   //Mantıksal operatörler = || (OR) koşullarından sadece birinin doğro olmasının yeterli olduğunda kullanabilir. || =  Alt Gr + -

   float temp = 25;

   if (temp <= 0 || temp >= 30 || temp <= 15)
   {
     printf("\n Hava kotu durumda!");
   }
   else
   {
     printf("\n Hava gayet iyi!");
   }
   
   return 0;
}
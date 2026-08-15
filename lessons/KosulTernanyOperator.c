#include<stdio.h>


int findMax(int x, int y)
{
    return (x>y) ? x : y;// x büyükse x'i yazdırcak küçük ise y'i yazdıracak
}

int main()
{
   // ternary operator = bir değeri döndürürken if else yerine kullanılack kısa yol
   // (koşul) ? doğruysa değer : yanlışsa değer

   int max = findMax(9,4);
   printf("%d", max);

   return 0;
}
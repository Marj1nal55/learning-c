#include<stdio.h>
#include<stdbool.h>

int main()
{
     
    //mantıksal operatörleri = && (And) 2 veya daha fazla koşulun aynı anda doğru olduğunu olduğunu kontrol ederken kullanılır.

    float temp = 25;
    bool sunny = false;

    if (temp >= 0 && temp <= 30 && sunny)// Otomatikmen sunny bool u true olarak kabu edilir belirt mek için sunny = 1 or true ya da sunny = false
    {
        printf("\n Hava gayet iyi!");
    }
    else
    {
        printf("\n Hava kotu durumda!");
    }


    return 0;
}
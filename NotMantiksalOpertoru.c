#include <stdio.h>
#include <stdbool.h>

int main()
{

      // mantıksal operatörler = ! (NOT) koşulları tersine çevirirken kullanılır.
    bool sunny = true;

    if (!sunny)//burada ! false olarak lmasını sağlar.
    {
        printf("\n Hava bulutlu!");
    }
    else
    {
        printf("\n Hava gunesli!");
    }

    return 0;
}
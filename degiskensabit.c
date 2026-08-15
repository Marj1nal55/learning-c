#include <stdio.h>

int main(){

    // constant = Derleyiciye belirli bir değişkenin değerleri değiştirilmemesi gerektiğini bildirmesine sağlar.

    const float pi = 3.141519;// değer bir daha değişmez
    // pi = 3.581185;// pi değeri değişmez hata verir

    printf("%f", pi);

   return 0;
}
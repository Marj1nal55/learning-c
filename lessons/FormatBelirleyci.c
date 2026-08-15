#include<stdio.h>

int main(){

    // format belirleyicileri % - Görüntülenecek veri türünü tanımlama ve biçimlendirme

    // %c = character
    // %s = string
    // %f = float
    // %lf = double
    // %d = integer

    // %.1 = Basamak sayısı belirleme
    // %1 = Sol taraftan boşluk bırakma
    // %- = Sağ tarafından boşluk bırkma

    float item1 = 5.75;
    float item2 = 10.00;
    float item3 =100.99;

    printf("İtem1 = %1.2f ₺\n", item1);
    // ₺ = Alt Gr + T
    printf("İtem2 = %1.2f ₺\n", item2);
    printf("İtem3 = %1.2f ₺\n", item3);


    return 0;
}
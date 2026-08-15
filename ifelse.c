#include<stdio.h>

int main()
    {
        int age;
        printf("\nYasinizi Giriniz: ");
        scanf("%d", &age);

        if(age >= 18)//Koşul a bağlı olarak çalışır.
        {
            printf("Tebrikler Kursa Kayit Oldunuz.");
        }
        else if(age < 0){
            printf("Henuz Dogmadiginiz Icin Kayit Olamazsiniz");
        }
        else if(age == 0){
            printf("Henuz Yeni Dogdugun Icin Kayit Olamazsiniz");
        }
        else{
           printf("Kursa Kayit Olamk Icin Yasiniz Yetmiyor.");
        }
    
    
    
        return 0;
    }
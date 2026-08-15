#include<stdio.h>

void birthday(char x[], int y)//paremetre içindeki
{
    printf("\nIyi ki dogdun! %s", x);
    printf("\n%d yasina girdin", y);
}

int main()
{

    char name[] = "Mirac";
    int age = 13;

     birthday(name, age);//argüman parantez içindeki
     birthday("Nisa", 18);


    return 0;
}
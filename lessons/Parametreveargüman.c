#include<stdio.h>

void birthday(char x[], int y)//paremetre içindeki
{
    printf("\nIyi ki dogdun! %s", x);
    printf("\n%d yasina girdin", y);
}

int main()
{

    char name[] = "Marjinal";
    int age = 20;

     birthday(name, age);//argüman parantez içindeki
     birthday("Marji", 30);


    return 0;
}

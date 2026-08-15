#include<stdio.h>
#include<string.h>

int main()
{
   char name[25];
    int age;

    printf("Adin Ne? ");
    //scanf("%s", &name); //İnput da boşluk gerektirmiyorsa bu
    fgets(name,25,stdin); //İnput da boşluk gerekirse bu
    name[strlen(name)-1] = '\0';
    printf("Kac Yasindasin?");
    scanf("%d", &age);

    printf("Merhaba %s , nasilsin\n", name);
    printf("%d yasindasin", age);


    return 0;
}
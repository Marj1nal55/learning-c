#include<stdio.h>

double square(double x)
{
    return x*x;
}

int main()
{
 
    double a = square(3.1);
    printf("%lf", a);

    return 0;
}
#include<stdio.h>
#include<math.h>

int main()
{

    double A = sqrt(16);//karakök//%lf
    double B = pow(2,3);//üs alma//%lf
    int C = round(3.25);//yuvarlama//%d
    int D = ceil(3.01);//Her zaman üste yuvarlar%d
    int E = floor(3.99);//tabana yuvarlar%d
    double F = fabs(-253);//Mutlak değer alma%lf
    double G = log(5) ;//Logarima alma%lf
    double H = sin(45);
    double I = cos(45);
    double J = tan(45);

    printf("\n%lf", H);
    printf("\n%lf", I);
    printf("\n%lf", J);

    return 0;
}
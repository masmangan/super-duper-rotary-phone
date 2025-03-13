#include <stdio.h>
#include <math.h>

#define PI 3.14159

double calc(double raio);
// define um protótipo para a função
// de forma que o compilador gere o código
// assembly correto.

int main(void) 
{
    double area;
    double raio;
    double x;

    scanf("%lf", &raio);

    area = calc(raio);
   
    printf("A=%.4lf\n", area);
    
    return 0;
}

double calc(double raio) 
{
    return PI * pow(raio, 2.0);
}
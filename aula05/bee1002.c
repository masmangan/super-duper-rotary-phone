#include <stdio.h>
#include <math.h>

#define PI 3.14159

int main(void) 
{
    double area;
    double raio;
    double x;

    printf("Endereco da variavel area: %p\n", &area);
    printf("Endereco da variavel raio: %p\n", &raio);
    printf("Endereco da variavel x   : %p\n", &x);

    scanf("%lf", &raio);
    
    area = PI * pow(raio, 2.0);
    
    printf("A=%.4lf\n", area);
    
    return 0;
}
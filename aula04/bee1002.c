#include <stdio.h>
#include <math.h>

#define PI 3.14159

int main(void) 
{
    double area;
    double raio;
    double x;
    
    scanf("%lf", &raio);
    
    area = PI * pow(raio, 2.0);
    
    printf("A=%.4lf\n", area);
    
    return 0;
}
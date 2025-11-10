#include<stdio.h>
#include<math.h>
#define PI 3.14159

int main(){
    double radius;
    double area;
    double surfacearea;
    double volume;
    
    printf("Enter radius: ");
    scanf("%lf",&radius);

    area = PI*pow(radius,2);
    surfacearea = 4*PI*pow(radius,2);
    volume = (4*PI*pow(radius,3))/3;

    printf("Area = %.2lf\n",area);
    printf("Surface Area = %.2lf\n",surfacearea);
    printf("Volume = %.2lf\n",volume);

    return 0;
}
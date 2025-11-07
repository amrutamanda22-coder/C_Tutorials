// Format specifier = Special tokens that begin with a % symbol,
// followed by a character that specifies the data type
// and optional modifiers (width, precision, flags).
// They control how data is displayed or interpreted.

#include <stdio.h>

int main(){
    
    int age = 25;
    float price = 19.99;
    double pi = 3.14159265358979;
    char currency = '$';
    char name[] = "Manda Amruta";

    printf("%d\n",age);
    printf("%f\n",price);
    printf("%lf\n",pi);
    printf("%c\n",currency);
    printf("%s\n",name);

    //width precision flag

    int num1 = 1;
    int num2 = 10;
    int num3 = -100;

    printf("%d\n",num1);
    printf("%d\n",num2);
    printf("%d\n",num3);

    //number after percentage will set width

    printf("%3d\n",num1);
    printf("%3d\n",num2);
    printf("%3d\n",num3);

    printf("%03d\n",num1);
    printf("%03d\n",num2);
    printf("%03d\n",num3);

    printf("%+d\n",num1);
    printf("%+d\n",num2);
    printf("%+d\n",num3);

    float price1 = 19.99;
    float price2 = 1.50;
    float price3 = -100.00;

    printf("%f\n",price1);
    printf("%f\n",price2);
    printf("%f\n",price3);

    printf("%+7.2f\n",price1);
    printf("%+7.2f\n",price2);
    printf("%+7.2f\n",price3);

    //the output is rounded

    printf("%.1f\n",price1);
    printf("%.1f\n",price2);
    printf("%.1f\n",price3);

    return 0;
}
#include <stdio.h>
#include<stdbool.h> //standard boolean header file

// int = whole numbers (4 bytes in modern systems)
// float = single-precision decimal number (4 bytes)   ← typo corrected (was “flpat”)
// double = double-precision decimal number (8 bytes)
// char = single character (1 byte)
// char[] = array of characters (size varies)
// bool = true or false (1 byte, requires <stdbool.h>)

int main(){
    //variable = A reusable container for a value
    //           Behaves as if it were the values it contains.

    int age = 5;
    int year = 2025;
    int quantity = 2;

    printf("You are %d years old\n",age);
    printf("The year is %d\n",year);
    printf("You have ordered %d * items\n",quantity);

    float gpa = 9.5;
    float price = 200.50;
    float temp = 24.8;


    printf("Your gpa is %f\n",gpa);
    printf("The price is $%f\n",price);
    printf("The temperature if %f°F\n",temp);

    double pi = 3.14159265358979;
    double e = 2.7182818284590;

    printf("The value of pi is %.15lf\n",pi);
    printf("The value of e is %.15lf\n",e);

    char grade = 'A';
    char symbol = '!';
    char currency = '$';

    printf("Your grade is %c\n",grade);
    printf("Your favourite symbol is %c\n",symbol);
    printf("The currency is %c\n",currency);

    char name[] = "Manda Amruta"; //char array 
    char food[] = "Burger";
    char email[] = "ammu2205@gmail.com";
    
    printf("Hello %s !\n",name);
    printf("Your favourite food is %s",food);
    printf("Your email is %s\n",email);

    bool isOnline = true;
    bool isStudent = true;
    bool forSale = false;

    if(isOnline)
    {
        printf("You are ONLINE\n");
    }
    else
    {
        printf("You are OFFLINE\n");
    }

    if(isStudent)
    {
        printf("You are a STUDENT\n");
    }
    else
    {
        printf("You are NOT a STUDENT\n");
    }
    
    if(forSale)
    {
        printf("That item is for sale");
    }
    else 
    {
        printf("That item is NOT for sale");
    }
    return 0;
}
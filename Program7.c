#include <stdio.h>
#include <string.h>

int main(){

    int age = 0;
    float gpa = 0.0f;
    char grade = '\0';
    char name[100] = "";

    printf("Enter your age:");
    scanf("%d",&age);

    printf("Enter your gpa:");
    scanf("%f",&gpa);

    printf("Enter your grade:");
    scanf(" %c",&grade);

    getchar(); //clears new line char with input buffer
    printf("Enter your full name:");
    fgets(name,100,stdin); 
    name[strlen(name) - 1] = '\0';
    // stdin means standard input
    //file gets string we are using this coz scanf doesn't read characters after space

    printf("%s\n",name);
    printf("%d\n",age);
    printf("%.2f\n",gpa);
    printf("%c\n",grade);
    

    return 0;
}
#include<stdio.h>

int main() {
    int age = 18;
    int year = 2025;
    int quantity = 2;

    float GPA = 9.79;
    float price = 19.99;
    float temperature = 24.5;

    double pi = 3.14159265358979;

    char grade = 'A';
    char symbol = '&';
    char currency = '$';

    printf("You are %d years old\n", age);
    printf("It's %d!\n", year);
    printf("You have ordered %d Nintendo Switches\n", quantity);

    printf("Your GPA is %.2f\n", GPA);
    printf("The price is $%.2f\n", price);
    printf("The temperature is %.1fC\n", temperature);

    printf("The value of pi is %.15lf\n", pi);

    printf("Your grade is %c\n", grade);
    printf("Your favorite symbol is %c\n",symbol);
    printf("Currency of the United States is %c\n", currency);
    return 0;
}

/*
A variable is a reusable container for a value
Behaves as if it were the value it contains
*/
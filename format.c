#include <stdio.h>

int main() {

    int age = 18;
    float price = 99.99;
    double pi = 3.1415926535;
    char currency = '$';
    char name[] = "Yashwant Kora";

    printf("Your age is %d\n", age);
    printf("Price: %.2f\n", price);
    printf("PI : %lf\n", pi);
    printf("Currency: %c\n", currency);
    printf("Hello, %s\n", name);

    //width and flags
    int num1 = 1;
    int num2 = 10;
    int num3 = 20;

    printf("~WIDTH~\n");

    printf("%-+5d\n", num1);
    printf("%+5d\n", num2);
    printf("%+05d\n", num3);

    //precision
    float price1 = 20.23;
    float price2 = 1.50;
    float price3 = -100.00;

    printf("~PRECISION~\n");

    printf("%+1.2f\n", price1);
    printf("%f\n", price2);
    printf("%f\n", price3);

    return 0;
}





/*
Format Specifiers are special tokens that begin with '%' symbol,
followed by a character that specifies the data type and optional modifiers(width, precision, flags),
they control how data is displayed or interpreted
*/
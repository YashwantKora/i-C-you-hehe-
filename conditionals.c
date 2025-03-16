#include <stdio.h>

int main(void)
{
    int x;
    int y;

    printf("Enter x value: ");
    scanf("%i", &x);

    printf("Enter y value: ");
    scanf("%i", &y);

    if(x < y){
        printf("%d is less than %d\n",x, y);
    }
    else if(x > y){
        printf("%d is more than %d\n", x, y);
    }
    else{
        printf("%d is equal to %d\n",x, y);
    }
    return 0;
}
#include <stdio.h>
// #include <cs50.h>

// int main(void)
// {
//     string f_name = get_string("What's your first name: ");
//     string l_name = get_string("What's your last name: ");

//     printf("Hello, %s %s!\n", f_name, l_name);
// }

int main(void)
{
    char f_name[100];
    char l_name[100];
    printf("What's your first name: ");
    scanf("%s", f_name);
    printf("What's your last name: ");
    scanf("%s", l_name);

    printf("Hello, %s %s!\n", f_name, l_name);
}
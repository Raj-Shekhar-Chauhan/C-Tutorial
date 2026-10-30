#include <stdio.h>

int main()
{
    int password;
    printf("Enter your password\n");
    scanf("%d", &password);

    switch (password)
    {
        case 15:
        printf("You have entered correct password\n");
        break;

        default:
        printf("You have entered wrong password\n");
    }

    return 0;
}
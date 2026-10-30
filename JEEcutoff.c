#include <stdio.h>

int main()
{
    int a;
    printf("Cutoff for Admission in JEE Mains\n");
    printf("Enter 1 for Grenral category\n");
    printf("Enter 2 for OBC category\n");
    printf("Enter 3 for EWS category\n");
    printf("Enter 4 for ST and SC category\n");
    scanf("%d", &a);

    
    switch (a)
    {
        case 1:
        printf("Enter Your marks\n");
        scanf("%d", &a);

        if (a>=160)
        {
        printf("You are selected for JEE Advance\n");
        }
        else
        {
            printf("Try next time\n");
        }
        break;


        case 2:
        printf("Enter your marks\n");
        scanf("%d", &a);

        if (a>=125)
        {
            printf("You are selected for JEE Advance\n");
        }
        else
        {
            printf("Try next time\n");
        }
        break;


        case 3:
        printf("Enter your marks\n");
        scanf("%d", &a);

        if (a>=120)
        {
            printf("You are seleced for JEE Advance\n");
        }
        else
        {
            printf("Try next time\n");
        }
        break;


        case 4:
        printf("Enter you marks\n");
        scanf("%d", &a);

        if (a>=70)
        {
            printf("Yor are seleced for Jee Advance\n");
        }
        else
        {
            printf("Try next time\n");
        }
        break;

        default:
        printf("ERROR 404 NOT FOUND\n");


    }


    return 0;

}
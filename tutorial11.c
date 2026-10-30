#include <stdio.h>

int main()
{
int age,marks;
printf("Enter your age from 3,10,14,16 & 18\n");
scanf("%d", &age);

printf("Enter your marks\n");
scanf("%d", &marks);

switch (age)

{
    case 3:
    printf("The age is 3\n");
    switch (marks)
    {
        case 45:
        printf("the marks is 45\n");
        break;
        
        default:
        printf("The marks is not 45\n");
    }
    break;

    case 10:
    printf("The age is 10\n");
    break;

    case 14:
    printf("The age is 14\n");
    break;
    
    case 16:
    printf("The age is 16\n");
    break;
    
    case 18:
    printf("The age is 18\n");
    break;

    default:
    printf("Age is not 3,10,14,16 & 18\n");



}



    return 0;
}
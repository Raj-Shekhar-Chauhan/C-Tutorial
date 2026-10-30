#include <stdio.h>

int main()
{
int age;
printf("Enter your age\n");
scanf("%d", &age);

printf("You have entered %d as you age\n",age);

if (age>=18)
{
    printf("YOU can vote!\n");
}

else if (age>=10)
{
    printf("YOu are between 10 to 18 you can vote for kids!\n");
}

else if (age>=3)
{
    printf("You are between 3 to 10 you can vote for babies!\n");
}

else if (age>=1)
{
    printf("You are less than 3 years old you cannot stand properly how can you vote!\n");
}

else if (age<=0)
{
printf("You are not even born yet how are you responding!!!\n");
}

else
{
    printf("You cannot vote!\n");
}






    return 0;
}
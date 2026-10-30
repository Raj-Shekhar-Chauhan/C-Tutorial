#include <stdio.h>
/*print multiplication table of a number entered by the user in pretty form

Example:

Input
Enter the number you want multiplication table of:
6

Output
Table of 6:
6 X 1 = 6
6 X 2 = 12
6 X 3 = 18
.
.
.
6 X 10 = 60


*/

int main()
{
    int a, b;

    printf("Enter the number you want multiplication table of \n");
    scanf("%d", &a);

    for ( b = 1; b <= 10; b++)
    {
        printf("a x b = %d\n",a*b);
    }

    return 0;
}
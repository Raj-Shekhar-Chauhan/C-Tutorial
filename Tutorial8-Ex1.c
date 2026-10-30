# include <stdio.h>
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
    int a,b;
    b = 1;


printf("Enter the number you want multiplication table of \n");
scanf("%d", &a);


printf("a x 1 = %d\n",a*b );
b = 2;
printf("a x 2 = %d\n",a*b );
b = 3;
printf("a x 3 = %d\n",a*b );
b = 4;
printf("a x 4 = %d\n",a*b );
b = 5;
printf("a x 5 = %d\n",a*b );
b = 6;
printf("a x 6 = %d\n",a*b );
b = 7;
printf("a x 7 = %d\n",a*b );
b = 8;
printf("a x 8 = %d\n",a*b );
b = 9;
printf("a x 9 = %d\n",a*b );
b = 10;
printf("a x 10 = %d\n",a*b );




    return 0;
}

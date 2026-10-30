#include <stdio.h>
#define PI 3.14
int main()
{
    int a = 8;
    // float b = 7.333;
    const float b = 7.333;
   // b = 2; // cannot do this since b is a constan
   // PI = 7.34; // cannot do this since PI is a constan
//printf("My backslash \\ %f", PI);
//printf("My backslash \\n %f", PI);
//printf("My backslash \\n %f", PI);
//printf("tab character \t My backslash \\n %f", PI);
printf("tab character \t My backslash  \a  %f", PI);
// \a sound k liye hota h
//printf("Hello World\n");
//printf("The value of a is %d and the value of b is %.4f\n", a,b);
//printf("The value of a is %d and the value of b is %10.4f\n", a,b);
//printf("%8.4f", b);
// iska matlab h 8 character ki space me 4 point decimal accuracy se print karo
//printf("%-18.4f this", b);
return 0;
}
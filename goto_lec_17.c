/*
#include <stdio.h>
int main()
{
label:
printf("we are inside label\n");
printf("hello world\n");
goto label;



    return 0;
}
    */
 /*  #include <stdio.h>
int main()
{
label:
printf("we are inside label\n");
goto end;
printf("hello world\n");
goto label;
end:
printf("we are at end\n");



    return 0;
    */

    #include <stdio.h>
    int main()
    {
        int i,num,j;
        for (i=0; i<10; i++)
        {
            printf("%d\n",i);
            for (j=0; j<10; j++)
            {
                printf("Enter number. Enter 0 to exit program\n" );
                scanf("&d", &num);
                if (num==0)
                {
                    goto end;
                }
            }
            

        }
        end:
        return 0;

    }
// idk kuch galti h

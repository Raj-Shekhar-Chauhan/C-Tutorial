#include <stdio.h>
int main() {
    int n,m;
    
    printf("Enter N\n");
    scanf("%d",&n);
    
    for(int i=1; i<=10; i++){
        m = n*i;
        printf("%d x %d = %d\n", n,i,m);
    }
    return 0;
}
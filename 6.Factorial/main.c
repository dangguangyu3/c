#include <stdio.h>

int main() {
    int i,j,n=1;
    scanf("%d",&i);
    for(j=1;j<=i;j++)
    {
        n=n*j;
    }
    printf("%d\n",n);
    return 0;
}

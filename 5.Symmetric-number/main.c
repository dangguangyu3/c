#include <stdio.h>

int main() {
    int i,j,k=0;
    scanf("%d",&i);
    k=i;
    while(i)
    {
        j=j*10+i%10;
        i=i/10;
    }
    if(j==k)
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }
    return 0;
}

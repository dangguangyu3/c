#include <stdio.h>

int main() {
    int i,total=0;
    for(i=0;i<=100;i++)
    {
        if(total>2000)
        {
            break;
        }
        total+=i;
    }
    printf("total=%d,i=%d\n",total,i);
    return 0;
}
#include <stdio.h>

int main() {
    int i,total=0;
    for(i=0;i<=100;i++)
    {
        if(i%2==0)
        {
            continue;
        }
        total+=i;
    }
    printf("total=%d\n",total);
    return 0;
}

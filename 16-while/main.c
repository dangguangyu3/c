#include <stdio.h>
//计算1到100的和
int main() {
    int i=1,total=0;
    while(i<=100)
    {
        if(i%2==0)
        {
            i++;
            continue;
        }
        total=total+i;//把i加到total上
        i++;
    }
    printf("total=%d\n",total);
    return 0;
}

#include <stdio.h>

int main() {
    int i,j;
    for(i=0;i<5;i++)//控制到底要输出多少行
    {
        for(j=0;j<=i;j++)//内层控制每一列显示显示
        {
            printf("*");
        }
        printf("\n");//一行结束就需要输出换行
    }

    return 0;
}

#include <stdio.h>
void print(char d[])
{
    int i=0;
    while(d[i])
    {
        printf("%c",d[i]);
        i++;
    }
    printf("\n");
}
int main() {
    char c[6]="hello";//使用这种方式初始化字符数组
    char d[5]="how";
    printf("%s\n",c);//使用%s来输出一个字符串
    print(d);
    return 0;
}

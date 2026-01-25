#include <stdio.h>
//scanf一次读多种类型
int main() {
    int i,ret;
    float f;
    char c;
    ret=scanf("%d %c%f",&i,&c,&f);//指scanf匹配成功的个数
    printf("i=%d,c=%c,f=%5.2f\n",i,c,f);
    return 0;
}

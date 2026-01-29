#include <stdio.h>
//scanf读取字符串操作，会自动往字符数组中放结束符
int main() {
    char c[10];
    char d[10];
    scanf("%s%s",c,d);
   printf("c=%s,s=%s\n",c,d);
 //   scanf("%s",c);//字符数组名中存储了数组的起始地址，因此不需要取地址
 //   printf("%s\n",c);
    return 0;
}

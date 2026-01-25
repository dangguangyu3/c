#include<stdio.h>
//scanf用来读取标准输入，scanf把标准输入的内容，需要放到某个变量空间里，因此变量必须取地址
int main()
{
    int i;
    char c;
    scanf("%d", &i);
    printf("i=%d\n", i);//把标准缓冲区的整型数读走了
//	fflush(stdin);//清空标准输入缓冲区
    while (getchar() != '\n');//标准方法
    scanf("%c", &c);//scanf函数在读取整型数，浮点数，字符串时会忽略'\n'(回车符)，空格符等字符
    printf("c=%c\n", c);
    return 0;
}
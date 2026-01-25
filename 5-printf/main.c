#include<stdio.h>
int main()
{
    int age = 21;
    printf("Hello %s, you are %d years old\n", "Bob", age);
    int i = 10;
    float f = 96.3;
    printf("student number=%-3d,score=%5.2f\n", i, f);//-号代表左对齐
    i = 100;
    f = 98.21;
    printf("student number=%3d,score=%5.2f\n", i, f);//小数一共五位算上小数点，小数部分站两位
    return 0;
}
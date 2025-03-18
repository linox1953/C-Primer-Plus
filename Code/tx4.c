#include <stdio.h>

int main(void)
{
    printf("%5.2f\n", 3.1);    // f1(3.10)字段宽度为4,会自动在前面补上一个空格
    printf("%-5.2fHe\n", 3.1); // '-' 表示左对齐,这样会自动在后面补上一个空格
    printf("%.2d\n", 1);       // 对于整形转换, '.数字' 表示待打印数字的最小位数
                               // 若不满足,会在前面加入0
    printf("%+.2f\n", 2.235);  // '+' 表示自动添加正负号
    printf("%+.2f\n", -2.235);

    printf("% .2f\n", 2.235); // 空格:若为正则添加空格,若为负添加负号
    printf("% .2f\n", -2.235);
    return 0;
}
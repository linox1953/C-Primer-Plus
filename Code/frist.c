// 在 C 程序顶部的信息集合被称为头文件
// stdio.h 包含了供编译器使用的输入和输出函数
// #include <stdio.h>相当于把 stdio.h 中的所有内容都输入该行
#include <stdio.h> 

// int是main()函数的返回类型
// void是main()的形式参数
// C程序从main()开始执行
int main(void) 
{
    int num; // 声明(declaration),在内存中给变量num划分空间
             // 首次使用变量需要先声明
             // 命名的第1个字符必须是字母或下划线,不能是数字            
    num = 1; // 赋值表达式语句,把值1赋给变量num

    printf("I am a simple "); // 调用printf()函数
    printf("computer. \n"); // \n 表示换行, \t 表示tab, \b 表示Backspace
    printf("My favorite number is %d because it is first.\n", num);

    return 0; // 返回0
              // 如果遗漏return,程序在运行到最外面的'}'时自动返回0
}
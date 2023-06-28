#define _CRT_SECURE_NO_WARNINGS 1
// helloworld.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include<stdio.h>
int max(int a, int b);
void max_math(int a, int b, int c);
void charater(char j);
void level(int a);
int main()
{
    /*
   //printf("hello world test\n"); 
        unsigned char d;
        char f;
        char c = 250;
        //printf("%d\n", c);
        d = c + 249;
        f = c + 249;
        printf("%d\n", d);
        printf("%u\n", d);
        return 0;
        */
    int a;
    int b;
    int c;
    char d;
    int e;
    int i;
    printf("输入需要转换的字母:\n");
    scanf("%c", &d);
    printf("输入需要评价的成绩:\n");
    scanf_s("%d", &e);
    printf("输入三个数字:\n");
    scanf_s("%d", &a);
    scanf_s("%d", &b);
    scanf_s("%d", &c);
    i = max(a, b);
    printf("前两个数值的最大值为%d\n", i);
    max_math(a, b, c);
    charater(d);
    level(e);
    return 0;
}
int max(int a, int b) {
    int d;
    if (a > b) {
        d = a;
    }
    else {
        d = b;
    }
    return d;
}
void max_math(int a, int b,int c) {
    
    if (a + b > c && a + c > b && b + c > a) {
        printf("三数值可以组成三角形\n");
    }
    else {
        printf("三数值不可以组成三角形\n");
    }
}
void charater(char j) {

    if (j >='a' && j <= 'z' ) {
        printf("字母为小写字母\n");
        j = j - 32;
        printf("字母转换为%c", j);
    }
    else if(j >= 'A' && j <= 'Z') {
        printf("字母为大写字母\n");
        j = j + 32;
        printf("字母转换为%c\n", j);
    }
    else {
        printf("非法字符\n");
    }
}
void level(int k) {
    char i;
    if (k < 60 && k >= 0) {
        i = 'D';
    }
    else if (k < 80 && k >= 60) {
        i = 'C';
    }
    else if (k < 90 && k >= 80) {
        i = 'B';
    }
    else if (k < 100 && k >= 90) {
        i = 'A';
    }
    else {
        printf("\n非法分值\n");
    }
    printf("\n考试等级为%c", i);
}


// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门使用技巧: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件

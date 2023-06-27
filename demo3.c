#include <stdio.h>
int main(){
	int a;
	int b;
        printf("hello world\n输入两个数字得出四则运算结果\n");
		scanf("%d %d",&a,&b);
        printf("%d+%d=%d\n",a,b,a+b);
        printf("%d-%d=%d\n",a,b,a-b);
        printf("%d*%d=%d\n",a,b,a*b);
        printf("%d/%d=%d\n",a,b,a/b);

    return 0;
}

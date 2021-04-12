#include<stdio.h>

//##的使用:拼接字符串
#define HB(X,Y) X##Y
int main()
{
	int pq100 = 1000;
	printf("%d\n", HB(pq, 100));
	return 0;
}

//#的使用：把一个宏参数变成对应的字符串而不被替换成所代表的值
#define PRINT(X) printf("the value of " #X " is %d\n",X)
int main()
{
	int a = 10;
	int b = 20;
	PRINT(a);
	PRINT(b);
	return 0;
}
//定义宏
#define DOUBLE(a) ((a)+(a))
int main()
{
	int a = 10;
	printf("%d\n", 10 * DOUBLE(a));
	return 0;
}


int main()
{
	printf("%d\n", __STDC__);//VS不支持
	return 0;
}
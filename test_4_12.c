#include<stdio.h>

//##��ʹ��:ƴ���ַ���
#define HB(X,Y) X##Y
int main()
{
	int pq100 = 1000;
	printf("%d\n", HB(pq, 100));
	return 0;
}

//#��ʹ�ã���һ���������ɶ�Ӧ���ַ����������滻���������ֵ
#define PRINT(X) printf("the value of " #X " is %d\n",X)
int main()
{
	int a = 10;
	int b = 20;
	PRINT(a);
	PRINT(b);
	return 0;
}
//�����
#define DOUBLE(a) ((a)+(a))
int main()
{
	int a = 10;
	printf("%d\n", 10 * DOUBLE(a));
	return 0;
}


int main()
{
	printf("%d\n", __STDC__);//VS��֧��
	return 0;
}
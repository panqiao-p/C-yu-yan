int main ()
{
	int i = 0;
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };//由于；越界访问造成的死循环
	for (i = 0; i <= 13; i++)
	{
		printf("hehe\n");
		arr[i] = 0;
	}
return 0;
}
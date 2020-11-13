#include <stdio.h>
void Add(int*p)
{
	(*p)++;    //必须加（）
}
int main()
{
	int num=0;  //定义为0，不然为地址
	Add(&num);
	printf("num=%d\n",num);
    Add(&num);
	printf("num=%d\n",num);
    Add(&num);
	printf("num=%d\n",num);
	return 0;
}
#include <stdio.h>
void Add(int*p)
{
	(*p)++;    //����ӣ���
}
int main()
{
	int num=0;  //����Ϊ0����ȻΪ��ַ
	Add(&num);
	printf("num=%d\n",num);
    Add(&num);
	printf("num=%d\n",num);
    Add(&num);
	printf("num=%d\n",num);
	return 0;
}
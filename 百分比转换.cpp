#include<stdio.h>
int main()
{printf("input a student score:\n");
	int a;
	scanf("%d",&a);
	if(a>=0 && a<=100)
	{a/=10;
	 switch(a)
	 {
    case 10:
    case 9:printf("the student grade:\nA");break;
	case 8:printf("the student grade:\nB");break;
	case 7:printf("the student grade:\nC");break;
	case 6:printf("the student grade:\nD");break;
    default:printf("the student grade:\nF");break;
	 }
	}
	 else
		printf("input error!");
	return 0;
}

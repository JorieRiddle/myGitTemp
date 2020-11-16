#include <stdio.h>
int main()
{
 printf("input a student score:\n");
 int score;
 scanf("%d",&score);
 char grade;
 if((0<=score) && (score<=100))
 {
	 if(score>=90)
	 {
		 grade='A';
	 }
	 else if(score>=80 && score<90)	 
	 {
		 grade='B';
	 }
	 
	 else if(score>=70 && score<80)	 
	 {
		 grade='C';
	 }
	 else if(score>=60 && score<70)	 
	 {
		 grade='D';
	 }
	 else 	 
	 {
		 grade='F';
	 }
	 printf("the student grade:\n");
	 printf("%c",grade);
 }
 else
 {
	 printf("input error!\n");
 }
   return 0;
}
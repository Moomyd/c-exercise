/*
   输入两门课的成绩，如果两门成绩都在60分以上。则输出“it is pass.”
   只要有一门低于60分就输出“it is not pass.”
   如果输入的任何一门成绩不在0-100范围内则输出“it is error.”。
*/
#include<stdio.h>
int main()
{
    int a,b;

   printf("a:");
   scanf ("%d",&a);
   printf("b:");
   scanf("%d",&b);
    if(a<0||a>100&b<0||b>100)
        printf("it is error.\n");
    else
    {
       switch(a/10) {
   case 10:
   case 9:
   case 8:
   case 7:
   case 6:
       switch (b/10){
       case 10:
       case 9:
       case 8:
       case 7:
       case 6:
        printf("it is pass.\n");
        break;
       }
       default :
        printf("it is not pass.\n");
        break ;
       }

    }

}


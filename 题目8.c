#include <stdio.h>
void printsquare (int num)
{
     int x, y;
     for (x = 0; x < num; x++)
     {
        for (y = 0; y < num; y++)
            {
            if (x == 0 || y == 0 || x == num - 1 || y == num - 1)
            {
                printf ("*");//打印*
            }
        else
        {
            printf (" ");//打印空格
        }

     }
     printf("\n");
     }
}
     int main(void)
     {
         int num;
         printf("请输入正方形边长：");
         scanf("%d",&num);
         printsquare (num);
         return 0;

     }


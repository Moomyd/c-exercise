#include <stdio.h>
struct Stu
{
	int num;
	char name[20];
	int score;
};
int main()
{
	int i,j;
	struct Stu student[5];
	struct Stu temp;
	for (i=0;i<5;i++)
        {
            printf("请输入学生的学号：%d ",student[i].num);
            printf("请输入学生的姓名：%6s",student[i].name);
            printf("请输入学生的成绩：%d\n",student[i].score);
        }
		for(j=i+1;j<5;j++)
		{
			if(student[i].score<student[j].score)
			{
				temp=student[i];
				student[i]=student[j];
				student[j]=temp;
			}
		}

	for(i=0;i<5;i++)
	{
		printf("%d %6s  %d\n",student[i].num,student[i].name,student[i].score);
	}
	return 0;
}


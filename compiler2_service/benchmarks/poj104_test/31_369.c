#include <header.h>


struct student
	{
		char number[30];
		char name[30];
		char gender;
		int age;
		char score[30];
		char add[30];
	};
int main_bench()
{
	
	int lengthofnumber[505]={0},lengthofname[505]={0},lengthofadd[505]={0},lengthofscore[505]={0};
	int i,j,numberofstudent=0;
	struct student stu[505];
	for(i=0;i<505;i++)
	{
		for(j=0;j<30;j++)
		{
			my_scanf("%c",&stu[i].number[j]);
			if(stu[i].number[j]==' '||stu[i].number[j]=='d')
			{
				break;
			}
			else
			{
				lengthofnumber[i]+=1;
			}
		}
		if(stu[i].number[2]=='d')
		{
			break;
		}
		else
		{
			numberofstudent+=1;
		}
		for(j=0;j<30;j++)
		{
			my_scanf("%c",&stu[i].name[j]);
			if(stu[i].name[j]==' ')
			{
				break;
			}
			else
			{
				lengthofname[i]+=1;
			}
		}
		my_scanf("%c",&stu[i].gender);
		getchar();
		my_scanf("%d",&stu[i].age);
		getchar();
		for(j=0;j<30;j++)
		{
			my_scanf("%c",&stu[i].score[j]);
			if(stu[i].score[j]!=' ')
			{
				lengthofscore[i]+=1;
			}
			else
			{
				break;
			}
		}
		for(j=0;j<30;j++)
		{
			my_scanf("%c",&stu[i].add[j]);
			if(stu[i].add[j]!='\n')
			{
				lengthofadd[i]+=1;
			}
			else
			{
				break;
			}
		}
		
	}
			i=numberofstudent-1;
			while(i!=0)
			{
				
				for(j=0;j<lengthofnumber[i];j++)
				{
					my_printf("%c",stu[i].number[j]);
				}
				my_printf(" ");
				for(j=0;j<lengthofname[i];j++)
				{
					my_printf("%c",stu[i].name[j]);
				}
				my_printf(" ");
				my_printf("%c ",stu[i].gender);
				my_printf("%d ",stu[i].age);
				for(j=0;j<lengthofscore[i];j++)
				{
					my_printf("%c",stu[i].score[j]);
				}
				my_printf(" ");
				for(j=0;j<lengthofadd[i];j++)
				{
					my_printf("%c",stu[i].add[j]);
				}
				my_printf("\n");
				i--;
			}
	
			for(j=0;j<lengthofnumber[0];j++)
			{
				my_printf("%c",stu[0].number[j]);
			}
			my_printf(" ");
			for(j=0;j<lengthofname[0];j++)
			{
				my_printf("%c",stu[0].name[j]);
			}
			my_printf(" ");
			my_printf("%c ",stu[0].gender);
			my_printf("%d ",stu[0].age);
			for(j=0;j<lengthofscore[0];j++)
				{
					my_printf("%c",stu[0].score[j]);
				}
			my_printf(" ");
			for(j=0;j<lengthofadd[0];j++)
			{
				my_printf("%c",stu[0].add[j]);
			}	
	return 0;
}
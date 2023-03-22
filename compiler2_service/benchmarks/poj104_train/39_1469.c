#define NUM_ITER 9129

#include <header.h>



int main_bench()
{struct student
{char name[30];
int final;
int crit;
char leader;
char west;
int paper;}stu;

	int max=0,n,i,total=0,money;
char bestboy[30];
my_scanf("%d",&n);
			for(i=0;i<n;i++)
			{my_scanf("%s ",stu.name);
			 my_scanf("%d ",&stu.final);
			  my_scanf("%d ",&stu.crit);
			 my_scanf("%c ",&stu.leader);
			 my_scanf("%c ",&stu.west);
			 my_scanf("%d",&stu.paper);
			 money=0;
			 if(stu.final>80&&stu.paper!=0)
 




				 money+=8000;
			 if(stu.final>85&&stu.crit>80)
				 money+=4000;
			 if(stu.final>90)
				 money+=2000;
			 if(stu.final>85&&stu.west=='Y')
			 money+=1000;
			 if(stu.crit>80&&stu.leader=='Y')
			 {money+=850;}

			 total+=money;
			 if(money>max)
			 {max=money;
			  strcpy(bestboy,stu.name);
			 }
			}
			my_printf("%s\n%d\n%d",bestboy,max,total);

}

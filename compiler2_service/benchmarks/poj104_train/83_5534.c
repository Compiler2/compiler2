#define NUM_ITER 112205

#include <header.h>

int main_bench()
{int i,j,n,b=0;
double GPA,a=0;
int xf[10],fs[10];
double jd[10];
my_scanf("%d\n",&n);
for(i=0;i<n;i++)
	{my_scanf("%d",&(xf[i]));}
my_printf("\n");
for(j=0;j<n;j++)
	{my_scanf("%d",&(fs[j]));}
for(i=0;i<n;i++)
{   if(fs[i]>=90)
		{jd[i]=4.0;}
    else if(fs[i]>=85)
		{jd[i]=3.7;}
    else if(fs[i]>=82)
		{jd[i]=3.3;}
    else if(fs[i]>=78)
		{jd[i]=3.0;}
    else if(fs[i]>=75)
		{jd[i]=2.7;}
    else if(fs[i]>=72)
		{jd[i]=2.3;}
    else if(fs[i]>=68)
		{jd[i]=2.0;}
    else if(fs[i]>=64)
		{jd[i]=1.5;}
    else if(fs[i]>=60)
		{jd[i]=1.0;}
    else{jd[i]=0.0;}
	}
for(i=0;i<n;i++)
	{a=a+(xf[i])*(jd[i]);
	b=b+(xf[i]);}
GPA=1.0*a/b;
my_printf("%.2lf",GPA);
}
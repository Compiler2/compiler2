#define NUM_ITER 21220

#include <header.h>

struct point{
           int id,a,b,c;
           }s[100000],tmp;
int main_bench()
{
    
    int i,n;
    my_scanf("%d",&n);
    for(i=0;i<n;i++)
	{
        my_scanf("%d %d %d",&s[i].id,&s[i].a,&s[i].b);
        s[i].c=s[i].a+s[i].b;
    }
	for(i=1;i<n;i++)
	{
		if(s[i].c>s[0].c)
		{
			tmp=s[0];
			s[0]=s[i];
			s[i]=tmp;
		}
	}
	for(i=2;i<n;i++)
	{
		if(s[i].c>s[1].c)
		{
			tmp=s[1];
			s[1]=s[i];
			s[i]=tmp;
		}
	}
	for(i=3;i<n;i++)
	{
		if(s[i].c>s[2].c)
		{
			tmp=s[2];
			s[2]=s[i];
			s[i]=tmp;
		}
	}
	for(i=0;i<3;i++)
	{
		my_printf("%d %d\n",s[i].id,s[i].c);
	}
  return 0;
}
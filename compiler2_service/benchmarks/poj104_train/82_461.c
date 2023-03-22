#include <header.h>


int main_bench()
{
	int x,y,i,n;
	int a[100];
	int b[100];
    my_scanf("%d",&n);
	i=0;
	while(i<n)
	{
		my_scanf("%d %d",&(a[i]),&(b[i]));
	    i++;
	}
	y=0;

	i=0;
	while(i<n)
	{  x=0;
		while(i<n)
	   {
	      if((a[i])>=90&&(a[i])<=140&&(b[i])>=60&&(b[i])<=90)
	      {x++;}
	      else break;
	      i++;
	   }
		if(x>=y)
		{y=x;}
    i++;
	}
	if(n==1)
	{  if((a[0])>=90&&(a[0])<=140&&(b[0])>=60&&(b[0])<=90)
		my_printf("1");
	else
		my_printf("0");
	}
	else my_printf("%d",y);
	return 0;
}

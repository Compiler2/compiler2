#include <header.h>

int main_bench()
{
	int w,i,j,a[13];
	int month[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
	my_scanf("%d",&w);
	for(i=0;i<12;i++)
	{
		int x=0;
		for(j=0;j<=i;j++)
		{
			x=x+month[j];
		}
		a[i]=(x+13-1)%7;
	}
	switch(w)
	{
	case 1:
		for(i=0;i<12;i++)
		{
			if(a[i]==4)
				my_printf("%d\n",i+1);
		}
		break;
    case 2:
		for(i=0;i<12;i++)
		{
			if(a[i]==3)
				my_printf("%d\n",i+1);
		}
		break;
    case 3:
		for(i=0;i<12;i++)
		{
			if(a[i]==2)
				my_printf("%d\n",i+1);
		}
		break;
	case 4:
		for(i=0;i<12;i++)
		{
			if(a[i]==1)
				my_printf("%d\n",i+1);
		}
		break;
    case 5:
		for(i=0;i<12;i++)
		{
			if(a[i]==0)
				my_printf("%d\n",i+1);
		}
		break;
    case 6:
		for(i=0;i<12;i++)
		{
			if(a[i]==6)
				my_printf("%d\n",i+1);
		}
		break;
    case 7:
		for(i=0;i<12;i++)
		{
			if(a[i]==5)
				my_printf("%d\n",i+1);
		}
	}
	return 0;
}

#include <header.h>

int main_bench()
{
	int n;
	int s[100];
	int i=0,a=0,b=0,c=0,d=0;
	double pa,pb,pc,pd;
	my_scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		my_scanf("%d",&(s[i]));
		if(s[i]>=1&&s[i]<=18)
		{
			a+=1;
		}
		else if(s[i]>18&&s[i]<36)
		{
			b+=1;
		}
		else if(s[i]>35&&s[i]<=60)
		{
			c+=1;
		}
		else if(s[i]>60)
		{
			d+=1;
		}
	}
	pa=1.0*100*a/n;
	pb=1.0*100*b/n;
    pc=1.0*100*c/n; 
    pd=1.0*100*d/n;
	my_printf("1-18: %.2lf%%\n",pa);
    my_printf("19-35: %.2lf%%\n",pb);
    my_printf("36-60: %.2lf%%\n",pc);
    my_printf("60??: %.2lf%%",pd);
	return 0;
}
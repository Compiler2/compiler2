#include <header.h>


int main_bench()
{
	int a[300], i, j, num=0, judge;
    char c;
	for(i=0;i<300;i++)
	{
	    
		my_scanf("%d%c", &a[i], &c);
		num=num+1;
        if(c=='\n')break;
	}

    int t=0, s=0;
	int k;
	k=a[0];
	if(num==1)	my_printf("No\n");
	else	
	{  
		judge=0;
		for(i=0;i<num;i++)
		{
			if(a[i]==k) {judge=judge+1;}
		}
	
		if(judge==num) my_printf("No\n");
		else
		{
			for(j=0;j<num;j++)
			{
				if(a[j]>t)t=a[j];
			}

			for(i=0;i<num;i++)
			{	
				if(a[i]>s && a[i]<t) s=a[i];
			}
	
			my_printf("%d\n", s);
				
		}
			
			
		
	}
	return 0;
}




		    
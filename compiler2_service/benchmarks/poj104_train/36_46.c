#include <header.h>

int main_bench()
{
	char a[20],b[20],*p1,*p2;
	int i=0;
	my_scanf("%s%s",a,b);
	if(strlen(a)!=strlen(b))
		my_printf("NO");
	else
	{
        for(p1=a;p1<a+strlen(a);p1++)
		    for(p2=b;p2<b+strlen(b);p2++)
				if(*p1==*p2)
					*p1=*p2='0';
		for(p1=a;p1<a+strlen(a);p1++)
			if(*p1=='0')
				i++;
		if(i==strlen(a))
			my_printf("YES");
		else
			my_printf("NO");
	}
	return 0;
}


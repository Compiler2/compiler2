#define NUM_ITER 817908

#include <header.h>

int main_bench()
{
	double a, b=0, c=0, l1=0, l2=0;
	int  i, t=0;
	char m[501], n[501];

	my_scanf("%lf\n", &a);
	my_scanf("%s\n", m);
	my_scanf("%s\n", n);

	l1=strlen(m);
	l2=strlen(n);

	if(l1!=l2)
		my_printf("error\n");
	else{
		for(i=0; i<l1; i++){
			if((m[i]=='A'||m[i]=='T'||m[i]=='C'||m[i]=='G')&&
				(n[i]=='A'||n[i]=='T'||n[i]=='C'||n[i]=='G'))
				t++;
		}
		
		if(t!=l1)
			my_printf("error\n");
		else{
			b=l1;
			for(i=0; i<l1; i++){
				if(m[i]==n[i])
					c++;
			}
				
			if(c/b>a)		
				my_printf("yes\n");
			else
				my_printf("no\n");
		}
	}
	return 0;
}

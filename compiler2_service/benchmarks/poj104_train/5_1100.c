#define NUM_ITER 752481

#include <header.h>

int main_bench()
{
	double n;
	int s=0,len1,len2,i;
	char b[501],c[501],e[501];
	my_scanf("%lf",&n);
	gets(b);
	gets(c);
	gets(e);
	len1=strlen(c);
	len2=strlen(e);
	for(i=0;i<len1;i++)
	{
		if(c[i]!='A'&&c[i]!='T'&&c[i]!='C'&&c[i]!='G'){
			len1=1;
			break;
		}
	}
	for(i=0;i<len2;i++)
	{
		if(e[i]!='A'&&e[i]!='T'&&e[i]!='C'&&e[i]!='G'){
			len2=2;
			break;
		}
	}
	if(len1!=len2){
		my_printf("error");
	}else{
		for(i=0;i<len1;i++)
		{
	    	if(c[i]==e[i]){
			    s++;
			}
		}
	    if(1.0*s/len1>=n){
		    my_printf("yes");
		}else{
			my_printf("no");
		}
	}
	
	return 0;
}
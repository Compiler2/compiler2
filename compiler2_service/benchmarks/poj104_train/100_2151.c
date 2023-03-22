#define NUM_ITER 230135

#include <header.h>

int main_bench()
{
	char p[300],j;
	int b,i,a=0;
	my_scanf("%s",&p);
	for(i=0;p[i]!='\0';i++){
		if((p[i]>='A'&&p[i]<='Z')||(p[i]>='a'&&p[i]<='z')){
			a++;
		}
	}
	if(a==0){
		my_printf("No");
	}
	else{
		for(j='A';j<='Z';j++)
		{
			b=0;
			for(i=0;p[i]!='\0';i++)
			{
				
				if(p[i]==j)
				{
					b++;
				}
			}
			
			if(b!=0)
			{
				my_printf("%c=%d\n",j,b);
			}
		}
        for(j='a';j<='z';j++)
		{
			b=0;
			for(i=0;p[i]!='\0';i++)
			{
				
				if(p[i]==j)
				{
					b++;
				}
			}
			
			if(b!=0)
			{
				my_printf("%c=%d\n",j,b);
			}
		}

	}
	return 0;
}

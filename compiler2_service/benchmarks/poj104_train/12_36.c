#define NUM_ITER 77933

#include <header.h>


int main_bench(){
	
	float s[15],t[15];
     int a=0;
	 
	for(int i=0;i<15;i++)
	{

		my_scanf("%f",&s[i]);
	if(s[i]==0)
		break;
	else
	{t[i]=s[i];
	a=a+1;
	}
	
	}

int b=0;
	for(int h=0;h<a;h++)
	{for(int k=0;k<a;k++)
		{if (t[h]/t[k]==2)
		
		b=b+1;
		}
	}
	my_printf("%d",b);

	return 0;
}
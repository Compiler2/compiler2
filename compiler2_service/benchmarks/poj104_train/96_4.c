#define NUM_ITER 1022904

#include <header.h>

int main_bench()
{	int i,n,k=0,a,j;
	char s[100],b[100];
	my_scanf("%s",s);
	n=strlen(s);
	if(n==1)
	{
		my_printf("0\n");
		k=s[0]-'0';
		my_printf("%d",k);
	}
	else
		if(n==2&&s[0]=='1'&&(s[1]-'0')<3)
		{
			my_printf("0\n");
		k=10+s[1]-'0';
		my_printf("%d",k);
		}
		
		else{for(i=0;i<n;i++)
			{k=s[i]-'0'+k*10;
		a=k/13;
		b[i]=a+'0';
		k=k%13;}
	b[i]='\0';
	
		for(j=0;j<i;j++)
		{if(b[j]!='0')
		{	my_printf("%c",b[j]);
			break;
		}
		}
		for(j++;j<i;j++)
		my_printf("%c",b[j]);
		my_printf("\n");
		my_printf("%d\n",k);
		}
	


	return 0;
}
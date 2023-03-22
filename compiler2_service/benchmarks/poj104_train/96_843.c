#define NUM_ITER 1151417

#include <header.h>

int main_bench()
{	char a[1000];
	gets(a);
	int num,shang[1000],yushu[1000];
	num=strlen(a);
	int i,j=1,k=0;
	int b=0,c,d;
	if(num==1)
	{
		for(i=0;i<=num-1;i++)
		{	
		my_printf("0\n");
		my_printf("%d",a[i]-'0');
		}
	}
	else
	{for(i=0;i<=num-2;i++)
	{
		if(i==0)
		{
			b=(a[i]-'0')*10+(a[i+1]-'0')*1;
			shang[i]=b/13;
			yushu[i]=b%13;
		}
		else
		{
			b=yushu[i-1]*10+(a[i+1]-'0')*1;
			shang[i]=b/13;
			yushu[i]=b%13;

		}
	}


		for(i=0;i<=num-2;i++)
	{
		if(i==0&&num==2&&shang[i]==0)
			my_printf("%d\n",shang[i]);
		if(i==0&&shang[i]!=0&&num!=2)
			my_printf("%d",shang[i]);
		if(i==0&&shang[i]!=0&&num==2)
			my_printf("%d\n",shang[i]);
		if(i!=0)
		{
			if(i==num-2)
			{
				my_printf("%d\n",shang[i]);
			}
			else 
				my_printf("%d",shang[i]);
		}

	}
 my_printf("%d",yushu[num-2]);
}
 
	return 0;
}

#define NUM_ITER 594974

#include <header.h>


int main_bench()
{
	char a[300]={'\0'},b[300]={'\0'},*p;
	int i,bb[300]={0},aa[300]={0},len,lena,lenb,start;

		
	gets(a);
	gets(b);

	lena=strlen(a);
	lenb=strlen(b);

	len=lena>lenb?lena:lenb;
	
		for(p=a,i=lena-1;p<a+lena;p++,i--)
		{
			aa[i]=*p-'0';
		}

			for(p=b,i=lenb-1;p<b+lenb;p++,i--)
		{
			bb[i]=*p-'0';
		}

		
	for(i=0;i<len;i++)
	{
		bb[i]=aa[i]+bb[i];
	
	}

	for(i=0;i<=len;i++)
	{
		if(bb[i]>=10)
		{
			bb[i]-=10;
			bb[i+1]++;
		}
	}

	start=0;

	for(i=len;i>=0;i--)
	{
	
		if(start)
		{
			my_printf("%d",bb[i]);
		}
		else if(bb[i]!=0)
		{
			my_printf("%d",bb[i]);
			start=1;
		}
	}
	if(!start) my_printf("0");

}

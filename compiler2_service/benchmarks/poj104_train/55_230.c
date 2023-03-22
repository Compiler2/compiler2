#define NUM_ITER 395109

#include <header.h>

int b;
int main_bench()
{   void PF(int k);
	int a; char n[10];int i,len;

	my_scanf("%d %s %d",&a,n,&b);
	len=strlen(n);
	int sum=0;
	for(i=0;i<len;i++)
	{
		if(n[i]>='0'&&n[i]<='9')
			sum=sum*a+n[i]-'0';
		else
                    if(n[i]>='a'&&n[i]<='z')
                    sum=sum*a+n[i]-'a'+10;
                else
                     sum=sum*a+n[i]-'A'+10;
	}
	PF(sum);
}

	void PF(int k)
	{
		if(k<b) 
		{
			if(k>=0&&k<=9)
				my_printf("%c",k+'0');
			else
				my_printf("%c",k-10+'A');
		}
		else
		{
			PF(k/b);
				if(k%b>=0&&k%b<=9)
				my_printf("%c",k%b+'0');
			else
				my_printf("%c",k%b-10+'A');
		}
	}
		    
	




		
	
	



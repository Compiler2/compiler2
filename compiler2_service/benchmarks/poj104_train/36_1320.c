#define NUM_ITER 948931

#include <header.h>

int main_bench()
{ char a[100],b[100];
int n,m,i,j,sum=0;
my_scanf("%s %s",a,b);
n=(int)strlen(a);
m=(int)strlen(b);
if(n==m)
{ 
	for(i=0;i<n;i++)
{
	for(j=0;j<m;j++)
	{
		if(a[i]==b[j])
		{
			b[j]=0;
		    break;
		}

			
	}
	
}
}
for(j=0;j<m;j++)
{
	if(b[j]!=0)
	{  
		sum=sum+1;
	}
	else
	{
		continue;
	}
}
if(sum==0)
my_printf("YES");
if(sum!=0)
my_printf("NO");
       

	return 0;
}
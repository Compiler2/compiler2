#define NUM_ITER 957667

#include <header.h>

int main_bench()
{int len1,len2,i,j,temp;
char a[100],b[100];
my_scanf("%s%s",a,b);
len1=strlen(a);len2=strlen(b);
for(i=0;i<len1-1;i++)
	for(j=i+1;j<len1;j++)
		if(a[i]>a[j])
		{temp=a[i];a[i]=a[j];a[j]=temp;
		}
for(i=0;i<len2-1;i++)
	for(j=i+1;j<len2;j++)
		if(b[i]>b[j])
		{temp=b[i];b[i]=b[j];b[j]=temp;
		}	
if(len1!=len2)	my_printf("NO");	
else
    {	for(i=0;i<len1;i++)
		if(a[i]!=b[i]) break;
	if(i==len1) my_printf("YES");
		else my_printf("NO");
    }	
return 0;
}
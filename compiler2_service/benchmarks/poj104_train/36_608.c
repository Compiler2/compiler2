#define NUM_ITER 981104

#include <header.h>

int main_bench()
{
	int i,j;
	int n;
	char str1[10];
	char str2[10];
	char temp;
	my_scanf("%s%s",str1,str2);
	n=strlen(str1);
	for(j=1;j<n;j++)
		for(i=0;i<n-j;i++)
			if(str1[i]<str1[i+1])
			{
				temp=str1[i];
				str1[i]=str1[i+1];
				str1[i+1]=temp;
			}
		n=strlen(str2);
		for(j=1;j<n;j++)
		    for(i=0;i<n-j;i++)
			    if(str2[i]<str2[i+1])
				{
				    temp=str2[i];
				    str2[i]=str2[i+1];
				    str2[i+1]=temp;
				}
			if(strcmp(str1,str2)==0)
				my_printf("YES\n");
			else
				my_printf("NO\n");

}
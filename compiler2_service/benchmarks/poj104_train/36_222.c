#define NUM_ITER 745361

#include <header.h>

int main_bench()
{
	char s1[1000],s2[1000],n,n1,i,j,k;
	my_scanf("%s %s",&s1,&s2);
	n=strlen(s1);
	n1=strlen(s2);
	for(i=0;i<n;i++)
		for(j=0;j<n1;j++)
			if(s2[j]==s1[i]){s2[j]=0;s1[i]=0;}
	for(j=0,k=0;j<n1;j++)
		if(s2[j]!=0)k++;
    for(j=0;j<n;j++)
		if(s1[j]!=0)k++;
	if(k==0)my_printf("YES");
	else my_printf("NO");	
}


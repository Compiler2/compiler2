#define NUM_ITER 647535

#include <header.h>

int main_bench()
{
	int n;
	char a[1000]="";
	char b[500][5]={""};
	int count[500]={0};
	int i;
	int j;
	int k=0;
	my_scanf("%d\n",&n);
	gets(a);
	int s;
	s=strlen(a);
	for(i=0;i<s-n+1;i++)
	{
		for(j=0;j<n;j++)
			b[k][j]=a[i+j];
		k++;
	}
	for(i=0;i<k;i++)
	  for(j=i;j<k;j++)
		  if(strcmp(b[i],b[j])==0)  
			  count[i]++;
	int max=0;
	for(i=0;i<k;i++)
		if(count[i]>=max)  max=count[i];
	if(max==1)my_printf("NO");
	else{
	my_printf("%d\n",max);
	for(i=0;i<k;i++)
	{if(count[i]==max) 
	puts(b[i]);
	}}
	return 0;
}
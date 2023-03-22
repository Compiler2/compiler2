#include <header.h>

int main_bench()
{   
	int count[600]={0};
	int n;
	char a[600]="";
	char b[600][10]={""};
	my_scanf("%d\n",&n);
	gets(a);
	int s=strlen(a);
	int i,j;
	for(i=0;i+n<=s;i++)
	{
         for(j=0;j<n;j++)
			 b[i][j]=a[i+j];
	}
	
	int k=s-n+1;
	for(i=0;i<k;i++)
		for(j=i+1;j<k;j++)
			if(strcmp(b[i],b[j])==0)
				count[i]++;
	int max=0;
	int y=0;
	for(i=0;i<k;i++)
		if(count[i]>max)  max=count[i];
		if(max==0) {my_printf("NO");return 0;}
     my_printf("%d\n",max+1);
	 for(i=0;i<k;i++)
		 if(max==count[i])
			 puts(b[i]);
	return 0;
}
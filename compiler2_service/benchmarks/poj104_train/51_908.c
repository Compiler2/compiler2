#define NUM_ITER 727510

#include <header.h>

int main_bench()
{
	int n,l,i,j,m,t,count[600]={0};
	char str[600],gram[600][6],c[10];
	my_scanf("%d",&n);
	gets(c);
	gets(str);
	l=strlen(str);
	for(i=0;i+n<=l;i++)
	{
		for(j=0;j<n;j++)
			gram[i][j]=str[i+j];
		gram[i][n]='\0';
	}
	m=i;
	for(i=0;i<m-1;i++)
	{
		for(j=i+1;j<m;j++)
			if(gram[i][0]!='\0'&&strcmp(gram[i],gram[j])==0)
			{
				gram[j][0]='\0';
				count[i]+=1;
			}
	}
	for(i=0;i<m-1;i++)
		for(j=0;j<m-1-i;j++)
			if(count[j]<count[j+1])
			{
				t=count[j];count[j]=count[j+1];count[j+1]=t;
				strcpy(gram[500+i],gram[j]);strcpy(gram[j],gram[j+1]);strcpy(gram[j+1],gram[500+i]);
			}
	if(count[0]==0)
	{
		my_printf("NO\n");
	}
	else
	{
		i=0;
		my_printf("%d\n",count[0]+1);
		while(count[i]==count[0])
		{
			my_printf("%s\n",gram[i]);
			i++;
		}
	}
	return 0;
}
#define NUM_ITER 696430

#include <header.h>

int main_bench()
{
	char zfc1[257]={0},zfc2[257]={0},zfc3[257]={0},zichuan[257]={0};
	int len1,len2,i,j,k,t,flag=0;
	int temp;
	my_scanf("%s",zfc1);
	my_scanf("%s",zfc2);
	my_scanf("%s",zfc3);
	len1=strlen(zfc1);
	len2=strlen(zfc2);
	for(i=0;i<=len1-len2;i++)
	{
		for(j=0;j<len2;j++)
		{
			zichuan[j]=zfc1[j+i];
		}
		if(strcmp(zichuan,zfc2)==0)
		{
			flag=1;
			temp=i;
			break;
		}
	}
	if(flag==0)
	{
		my_printf("%s",zfc1);
	}
	else
	{
			for(k=0;k<temp;k++)
			{
				my_printf("%c",zfc1[k]);
			}
			my_printf("%s",zfc3);
			for(t=temp+len2;zfc1[t]!='\0';t++)
			{
				my_printf("%c",zfc1[t]);
			}
	}
	return 0;
}

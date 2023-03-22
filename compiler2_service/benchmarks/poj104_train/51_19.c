#define NUM_ITER 1285090

#include <header.h>

int record(char str[][6],char curstr[], int count[],int num)
{
	int k=0;
	while((k<num)&&(strcmp(str[k],curstr)!=0))
		++k;
	if(k<num)
	{
		count[k]++;
		return num;
	}
	else
	{
		strcpy(str[num],curstr);
		count[num]=1;
		return num+1;
	}
}
int sub_count(char s[],char str[][6], int count[],int n)
{
	int m,k,len=strlen(s),num=0;
	char curstr[6];
	for(m=0;m<=len-n;m++)
	{
		for(k=0;k<n;k++)
		{
			curstr[k]=s[m+k];
		}
		curstr[k]='\0';
		num=record(str,curstr,count,num);
	}
	return num;
}
int main_bench()
{
	char s[1000],str[1000][6];
	int count[1000],num,n,i,max;
	my_scanf("%d%s",&n,s);
	num=sub_count(s,str,count,n);
	max=count[0];
	for(i=0;i<num-1;i++)
	{
        if(max<count[i+1])
			max=count[i+1];
	}
	if(max<=1)
		my_printf("NO");
	else
	{
	my_printf("%d\n",max);
	for(i=0;i<num;i++)
	{
		if(count[i]==max)
			my_printf("%s\n",str[i]);
	}
	}
}
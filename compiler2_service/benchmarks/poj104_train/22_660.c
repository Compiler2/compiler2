#define NUM_ITER 1322349

#include <header.h>

int str2int(char str[], int result[])
{
	int value,len,num=0,k=0;
	len=strlen(str);
	while(k<len)
	{
		value=0;
		while((str[k]!=',')&&(str[k]!='\0'))
			value=value*10+str[k++]-'0';
		result[num++]=value;
		k++;
	}
	return num;
}
int find2nd(int num,int result[])
{
    int k,second=-1,max=result[0];
	if(num==1)
		return -1;
    for(k=1;k<num;k++)
	{
		if(result[k]>max)
		{
			second=max;
			max=result[k];
		}
		else
		{
			if((result[k]>second)&&(result[k]<max))
				second=result[k];
		}
	}
	if(second==max)
		return -1;
	else
		return second;
}
int main_bench()
{
	char s[1000];
	int result[1000],num,second;
	gets(s);
	num=str2int(s,result);
	second=find2nd(num,result);
	if(second==-1)
		my_printf("No");
	else
		my_printf("%d",second);
}
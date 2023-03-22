#define NUM_ITER 30768

#include <header.h>

int main_bench()
{
	char str1[1000],str2[1000];
	int i,j,k;
	gets(str1);
	gets(str2);
	for(i=0;i<1000;i++)
	{
			if(str1[i]>64&&str1[i]<91)
			{str1[i]=str1[i]+32;}
			if(str2[i]>64&&str2[i]<91)
			{str2[i]=str2[i]+32;}
	}
    for(i=0;i<1000;i++)
	{
	if(str1[i]=='\0'&&str2[i]=='\0')
	{my_printf("=");break;}
	if(str1[i]>str2[i])
	{my_printf(">");break;}
    if(str1[i]<str2[i])
	{my_printf("<");break;}
	}
}


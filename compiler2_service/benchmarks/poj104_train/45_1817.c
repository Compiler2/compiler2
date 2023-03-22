#define NUM_ITER 966328

#include <header.h>

int main_bench(){
	char word1[100],word2[100],*p1,*p2;
	int i=0,len,j,num=0,a=0;
	my_scanf("%s%s",word1,word2);
	p1=word1;
	len=strlen(word1);
	for(p2=word2;*p2!='\0';p2++)
	{
		i++;
		for(j=0;j<len;j++)
		{
			if(*p2+j==*p1+j)
			{
				num++;
			}
			if(num==len)
			{
				a=i-1;
				break;
			}
		}
		if(a!=0)
		{
			break;
		}
	}
	my_printf("%d",a);
	return 0;
}
		


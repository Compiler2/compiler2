#define NUM_ITER 847560

#include <header.h>

int main_bench()
{
	char s[100],yuan[100],xin[100];
	int i=0,j=0,len,lenyuan,lenxin;
	gets(s);
	gets(yuan);
	gets(xin);
	len=strlen(s);
	lenyuan=strlen(yuan);
	lenxin=strlen(xin);
	for(i=0;i<len;i++)
	{
		if(s[i]==yuan[0] && s[lenyuan+i-1]==yuan[lenyuan-1])
		{
			for(j=0;j<lenxin;j++)
			{
		    	s[i+j]=xin[j];
			}
			break;
		}
	}
	my_printf("%s\n",s);
	

	return 0;
}
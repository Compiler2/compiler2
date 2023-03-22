#define NUM_ITER 1314968

#include <header.h>

int main_bench()
{
	char s[501];
	int i,j,k,p,len;
	my_scanf("%s",s);
	len=strlen(s);
	for(k=2;k<len;k++)
	for(i=0;i<=len-k;i++)
	{
		for(j=i;j<i+k/2;j++)
		if(s[j]!=s[2*i+k-1-j])break;
		if(j==i+k/2)
		{
			for(p=i;p<i+k;p++)
			my_printf("%c",s[p]);
			my_printf("\n");
		}
	}
	return 0;
}
		

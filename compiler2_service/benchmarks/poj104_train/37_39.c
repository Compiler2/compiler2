#define NUM_ITER 10284

#include <header.h>

char s[100001];
int bucket[26];
int t, i, j, k, len;
int main_bench()
{
	my_scanf("%d", &t);
	for(i=0;i<t;i++)
	{
		for(k=0;k<26;k++)bucket[k]=0;
		my_scanf("%s", s);
		while(s[j]!='\0')
		{
			bucket[s[j]-'a']++;
			j++;
		}
		len=j;
		j=0;
		while(s[j]!='\0')
			if(bucket[s[j]-'a']==1)
			{
				my_printf("%c\n", s[j]);
				break;
			}
			else j++;
		if(j==len)my_printf("no\n");
		j=0;
	}
	return 0;
}


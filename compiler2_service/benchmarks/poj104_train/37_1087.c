#define NUM_ITER 21064

#include <header.h>

int main_bench()
{
	char s[10000];
	int rec[30], i, t, len,find;
	my_scanf("%d",&t);
	while (t-- > 0)
	{
		my_scanf("%s",s);
		len=strlen(s);
		find=0;
		memset(rec,0,sizeof(rec));
		for (i = 0; i < len ;i++)
			rec[s[i]-'a']++;
		for (i = 0; i < len ;i++)
			if (rec[s[i]-'a']==1)
			{
				my_printf("%c\n",s[i]);
				find=1;
				break;
			}
		if (find==0)
			my_printf("no\n");
	}
	return 0;
}
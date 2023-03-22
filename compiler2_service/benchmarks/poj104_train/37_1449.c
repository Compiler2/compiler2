#define NUM_ITER 11623

#include <header.h>

int i,j,len,n;
char s[1000];
int cnt[1000];

main_bench()
{
	my_scanf("%d",&n);
	for (i = 0; i < n ;++i)
	{
		my_scanf("%s",s);
		len = strlen(s);
		memset(cnt,0,sizeof(cnt));
		for (j = 0; j < len; ++j)
			cnt[s[j]-'a']++;
		for (j = 0; j < len; ++j)
			if (cnt[s[j]-'a']==1) break;
		if (j<len) my_printf("%c\n",s[j]);
		else puts("no");
	}
	
}
#define NUM_ITER 552136

#include <header.h>

int main_bench()
{
	int num[52]={0};
	char  s[50],ss[50];
	int l,ll,i,flag;
	my_scanf("%s",s);
	my_scanf("%s",ss);
	l=strlen(s);
	ll=strlen(ss);
	if(l!=ll)
		my_printf("NO");
	else
	{
		for(i=0;i<l;i++)
		{
			if(s[i]>='A'&&s[i]<='Z')
				num[s[i]-'a']++;
			else if(s[i]>='a'&&s[i]<='z')
				num[s[i]-'a'+26]++;
		}
		for(i=0;i<l;i++)
		{
			if(ss[i]>='A'&&ss[i]<='Z')
				num[ss[i]-'a']--;
			else if(ss[i]>='a'&&ss[i]<='z')
				num[ss[i]-'a'+26]--;
		}
		flag=1;
		for(i=0;i<52;i++)
			if(num[i])
			{
				flag=0;
				break;
			}
		if(flag)
			my_printf("YES");
		else
			my_printf("NO");
	}
}

#define NUM_ITER 576730

#include <header.h>

int main_bench()
{
	char zfc[301];
	int szx[26]={0},szd[26]={0},flag=0,i,j,k;
	my_scanf("%s",zfc);
	for(i=0;zfc[i]!='\0';i++)
	{
		if(zfc[i]>='a'&&zfc[i]<='z')
		{
			szx[zfc[i]-'a']++;
			flag++;
		}
		if(zfc[i]>='A'&&zfc[i]<='Z')
		{
			szd[zfc[i]-'A']++;
			flag++;
		}
	}
	if(flag==0)
	{
		my_printf("No");
	}
	else 
	{
		for(j=0;j<26;j++)
		{
			if(szd[j]!=0)
			{
				my_printf("%c=%d\n",'A'+j,szd[j]);
			}
		}
		for(k=0;k<26;k++)
		{
		    if(szx[k]!=0)
			{
				my_printf("%c=%d\n",'a'+k,szx[k]);
			}
		}
	}
	return 0;
}

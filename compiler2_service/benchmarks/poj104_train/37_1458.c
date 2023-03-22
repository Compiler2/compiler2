#define NUM_ITER 512

#include <header.h>


int main_bench()
{
	int n,i;
	int a[26]={0};
	int aptr[26];
	int ap=0,j;
	char tmpch;
	my_scanf("%d",&n);
	my_scanf("%c",&tmpch);
	for (i=0;i<n;i++)
	{
		ap=0;
		my_scanf("%c",&tmpch);
		while(tmpch!='\n')
		{
			if(a[tmpch-'a']==0)
			{
				aptr[ap++]=tmpch-'a';
			}
			a[tmpch-'a']++;
			my_scanf("%c",&tmpch);
		}
		for(j=0;j<ap;j++)
		{
			if(a[aptr[j]]==1)
				break;
		}
		if (j<ap)
		{
			my_printf("%c\n",aptr[j]+'a');
		} 
		else
		{
			my_printf("no\n");
		}
		for (j=0;j<26;j++)
		{
			a[j]=0;
		}
	}
	return 0;
}
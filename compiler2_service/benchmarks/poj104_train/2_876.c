#define NUM_ITER 10921

#include <header.h>


struct Books
{
	int num;
	char author[26];
}a[1000];

int main_bench()
{
	int n;
	int i,j;
	int x;
	int max=0;
	char letter='A';
	int b[26]={0};
	my_scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		my_scanf("%d %s",&a[i].num,a[i].author);
	}
	for(i=0;i<n;i++)
	{
		for(j=0;;j++)
		{
			if(a[i].author[j]>=65 && a[i].author[j]<=90)
			{
				x=a[i].author[j];
				b[x-65]++;
			}else{
				break;
			}
		}
	}




	for(i=0;i<26;i++)
	{
		if(b[i]>max)
		{
			max=b[i];
			letter=i+65;
		}
	}
	my_printf("%c\n%d\n",letter,max);
	for(i=0;i<n;i++)
	{
		for(j=0;j<26;j++)
		{
			if(a[i].author[j]==letter)
			{
				my_printf("%d\n",a[i].num);
			}
		}
	}
	return 0;
}
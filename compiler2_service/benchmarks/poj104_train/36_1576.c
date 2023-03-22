#include <header.h>

int sta(char a[3000],int i)
{
	int j,n=0;
	for(j=0;j<strlen(a);j++)
	{
		if(a[j]==i)
			n++;
	}
	return n;
}
int main_bench()
{
	char a[3000]={'\0'},b[3000]={'\0'};
	int ma[52]={0},mb[52]={0},i,l=0;
	my_scanf("%s",a);
	my_scanf("%s",b);
	for(i=0;i<26;i++)
	{
		ma[i]=sta(a,i+65);
		ma[i+26]=sta(a,i+97);
		mb[i]=sta(b,i+65);
		mb[i+26]=sta(b,i+97);
		if(ma[i]!=mb[i]||ma[i+26]!=mb[i+26])
		{
			my_printf("NO\n");
			break;
		}
		else
			l++;
	}
	if(l==26)
		my_printf("YES\n");
	return 0;
}
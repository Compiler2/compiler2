#define NUM_ITER 5757

#include <header.h>


int main_bench()
{
    int n, i, max;
	my_scanf("%d", &n);
	int len[250], a[250];
    char str[250][100];
	for(i=0;i<n;i++)
	{
     my_scanf("%s", &str[i]);
	 len[i]=strlen(str[i]);
	
      a[i]=len[i];
	}
    int sum=i;
    for(int k=0;k<sum-1;k++)
	{
	for(i=0;i<sum-k-1;i++)
	{	if(len[i]>len[i+1]){max=len[i];len[i]=len[i+1];len[i+1]=max;}}
	}
     for(i=0;i<sum;i++)
    {
		if(a[i]==len[sum-1]){my_printf("%s\n", str[i]);break;}
	}
	   for(i=0;i<sum;i++)
    {
		if(a[i]==len[0]){my_printf("%s\n", str[i]);break;}
	}
	return 0;
}













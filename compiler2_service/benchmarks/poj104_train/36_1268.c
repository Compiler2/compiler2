#define NUM_ITER 950260

#include <header.h>

int main_bench()
{
	int n1,n2,i,j,k;
	char str1[50]={'\0'},str2[50]={'\0'};
	my_scanf("%s%s",&str1,&str2);
	n1=strlen(str1);
	n2=strlen(str2);
	k=0;
    for(i=0;i<n1;i++)
	{
		for(j=0;j<n2;j++)
			if(str1[i]==str2[j])
			{
				k++;
			str1[i]='1';
			str2[j]='1';
			break;
			}
	}
	if(k==n1&&k==n2)
		my_printf("YES");
	else
		my_printf("NO");

	return 0;
}

#define NUM_ITER 31615

#include <header.h>

int main_bench(){
	int i,n,j,m;
	char s[21];
	my_scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		m=0;
		my_scanf("%s",s);
		for(j=0;s[j];j++)
		{
			if((s[j]=='_')||(s[j]>='A'&&s[j]<='Z')||(s[j]>='a'&&s[j]<='z')||(s[j]>='0'&&s[j]<='9'&&j>0))
			{
				m=m+1;
			}
		
		
		}
		if(m==j){
			my_printf("yes\n");
		}
		else{my_printf("no\n");
		}
	}
	return 0;
	}
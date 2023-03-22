#define NUM_ITER 34206

#include <header.h>


int main_bench()
{
	int n,i,j,k,l,a;
	char s[255];
	my_scanf("%d",&n);
	for(i=0;i<n;i++){
		my_scanf("%s",s);
		a=strlen(s);
		if (s[a-1]=='r'&&s[a-2]=='e')
		{for(j=0;j<a-2;j++){
			my_printf("%c",s[j]);
		}
		my_printf("\n");
		}
		
		if (s[a-1]=='g'&&s[a-2]=='n'&&s[a-3]=='i')
		{for(k=0;k<a-3;k++){
			my_printf("%c",s[k]);
			
		}
		my_printf("\n");
		}
	
		if (s[a-1]=='y'&&s[a-2]=='l')
		{for(l=0;l<a-2;l++){
			my_printf("%c",s[l]);
		}
		my_printf("\n");
		}
	}
	return 0;
}

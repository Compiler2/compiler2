#define NUM_ITER 923280

#include <header.h>

int main_bench(){
	void copy(char a[],char b[],char c[]);
	char S[100],sub[100],re[100];
	my_scanf("%s",S);
	my_scanf("%s",sub);
	my_scanf("%s",re);
	int a,b,c,i,j;
	a=strlen(S);
	b=strlen(sub);
	c=strlen(re);
	
    int m,k;
	for(i=0;i<a;i++)
	{
		if(S[i]==sub[0]) 
		{ 
			for(j=0;j<b;j++)
			{
				if(S[i+j]!=sub[j]) break;
			}
			if(S[i+b-1]==sub[b-1])
			{   
			m=i;
			for(k=0;k<m;k++)my_printf("%c",S[k]);
			my_printf("%s",re);
			for(k=i+b;k<a;k++)my_printf("%c",S[k]);
			break;
			}
		}
	}  if(i==a)my_printf("%s",S);
	
}



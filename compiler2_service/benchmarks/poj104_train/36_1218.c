#define NUM_ITER 911105

#include <header.h>

int main_bench()
{
	int i,j,s=0,l;
	char s1[255],s2[255];
	my_scanf("%s%s",&s1,&s2);
	l=strlen(s2);
	for(i=0;i<strlen(s1);i++)
	{
		for(j=0;j<l;j++)
		{
			if(s1[i]==s2[j]) {s++,s2[j]=0;break;}
			}
		}
		if(s<l||strlen(s1)!=l) my_printf("NO");
		else  my_printf("YES");
		
	return 0;
	
	} 

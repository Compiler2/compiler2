#define NUM_ITER 443557

#include <header.h>

int compare(char a,char b[100],char c[100])
{
	int z,i,j=0,k=0;
	for(i=0;b[i]!='\0';i++)
	{
		if(b[i]==a)
			j++;
		if(c[i]==a)
			k++;
	}
	if(j!=k)
		z=0;
	else
		z=1;
	return(z);
}
int main_bench()
{
	char a,s1[100],s2[100];
	int i,s,j,k;
	my_scanf("%s %s",s1,s2);
	j=strlen(s1);
	k=strlen(s2);
	if(j!=k)
		my_printf("NO");
	else 
	{
			for(a='!';a<='~';a++)
			{
				s=compare(a,s1,s2);
				if(s==0)
				{my_printf("NO");break;}
			}
			if(s==1)
				my_printf("YES");
	}
}
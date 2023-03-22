#define NUM_ITER 84413

#include <header.h>

int main_bench()
{
	char s1[100],s2[100],c;
	int js1[150]={0},js2[150]={0},b=0,d,e,i,j,k,l1,l2;
	my_scanf("%s %s",s1,s2);
	l1=strlen(s1);
	l2=strlen(s2);
	if(l1!=l2)
		my_printf("NO");
	else
	{
		for(i=0;i<l1;i++)
		{
			for(j=65;j<123;j++)
				if(s1[i]==j)
					js1[j]++;
		}
		
		for(i=0;i<l1;i++)
		{
			for(j=65;j<123;j++)
				if(s2[i]==j)
					js2[j]++;
		}
		for(i=65;i<123;i++)
			if(js1[i]!=js2[i]) {b=1;my_printf("NO");break;}
			if(b==0) my_printf("YES");








	}



}
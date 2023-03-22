#define NUM_ITER 989698

#include <header.h>


int main_bench(){
	char w[2000];
	char s[2000];
	char m;
	int i,k;
	my_scanf("%s %s",s,w);
	if (strlen(s)==strlen(w))
	{
		for (i=0;s[i]!='\0';i++)
		{
			for(k=i;w[k]!='\0';k++)
			{
				if (s[i]==w[k])
				{
					m=w[k];
					w[k]=w[i];
					w[i]=m;
					break;
				} 		
			}
		}
		if (strcmp(s,w)==0)
		{
			my_printf("YES");
		} 
		else
		{
			my_printf("NO");
		}

	} 
	else
	{
		my_printf("NO");
	}
	return 0;
}
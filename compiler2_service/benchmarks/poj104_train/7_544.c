#define NUM_ITER 928046

#include <header.h>

int main_bench()
{
	int i,j,k=1,t;
	char s1[256],s2[256],s3[256];
	gets(s1);
	gets(s2);
	gets(s3);
	for(i=0;s1[i]!='\0';i++)
		if(s1[i]==s2[0])
		{
			for(j=1;s2[j]!='\0';j++)
				if(s2[j]==s1[i+j]) k++;
			if(s2[k]=='\0')
			{
				for(t=0;t<i;t++) my_printf("%c",s1[t]);
				for(t=0;t<k;t++) my_printf("%c",s3[t]);
				for(t=i+k;s1[t]!='\0';t++) my_printf("%c",s1[t]);
				my_printf("\n");
				break;
			}
		}
	if(s2[k]!='\0') my_printf("%s\n",s1);
	return 0;
}


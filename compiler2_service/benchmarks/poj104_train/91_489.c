#define NUM_ITER 1215593

#include <header.h>

int main_bench()
{
    char s[101]={'\0'};
	char r[101]={'\0'};
	gets(s);
	int n;
	n=strlen(s);
	for(int i=0;i<n;i++)
	{
		int a;
		if(i!=n-1)
		{
			a=s[i]+s[i+1];
		    r[i]=a;
		}
		else
		{
			a=s[0]+s[i];
			r[i]=a;
		}
	}
	puts(r);
    return 0;
}
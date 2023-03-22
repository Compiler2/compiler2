#define NUM_ITER 1091387

#include <header.h>

int main_bench()
{
	char s1[100],s2[100];
	int n,f;
	int i,j;
	int len1,len2;
	gets(s1);
	gets(s2);
	f=0;
	len1=strlen(s1);  len2=strlen(s2);
    for (i=0; i<len1; i++) {
		if ((s1[i]>='a')&&(s1[i]<='z')) s1[i]-=32;
		if ((s2[i]>='a')&&(s2[i]<='z')) s2[i]-=32;
		if (s1[i]<s2[i]) { f=-1; break; }
		if (s1[i]>s2[i]) { f=1; break; }
	}
	if (f==0) my_printf("=");
	if (f==-1) my_printf("<");
	if (f==1) my_printf(">");
	return 0;
}

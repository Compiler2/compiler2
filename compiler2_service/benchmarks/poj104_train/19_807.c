#define NUM_ITER 135168

#include <header.h>

int main_bench()
{
	int i,n,m;
	char *p1,*p2,*p3,*p,*s;
    p1=(char*)malloc(1000*sizeof(char));
	gets(p1);
    p2=(char*)malloc(100*sizeof(char));
	p3=(char*)malloc(100*sizeof(char));
	p=(char*)malloc(100*sizeof(char));
	gets(p2);
	gets(p3);
    n=strlen(p1);
	s=p1;
	    sscanf(s,"%s",p);
		m=strlen(p);
		if(strcmp(p2,p)==0)
		{my_printf("%s",p3);}
		else {my_printf("%s",p);}
        s=s+m+1;
	for(i=n-m-1;i>=0;i=i-m-1)
	{
		sscanf(s,"%s",p);
		m=strlen(p);
		if(strcmp(p2,p)==0)
		{my_printf(" %s",p3);}
		else {my_printf(" %s",p);}
        s=s+m+1;
	}
}
#define NUM_ITER 575637

#include <header.h>



int compare(const void*a,const void*b);
int main_bench()
{
	int i,n,j,tmp,len1,len2;
	char a[1000],b[1000];
	
	memset(a,0,sizeof(a));
	memset(b,0,sizeof(b));
	my_scanf("%s%s",a,b);
	len1=strlen(a);
    len2=strlen(a);
	qsort(a,len1,sizeof(char),compare);
    qsort(b,len2,sizeof(char),compare);
   

		if(strcmp(a,b)==0)
			my_printf("YES\n");
		else my_printf("NO\n");
		
return 0;
}

int compare(const void*a,const void*b)
{return*(char*)b-*(char*)a;}

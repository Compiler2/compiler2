#define NUM_ITER 871297

#include <header.h>

void move(char a[])
{   char t;
     int l,i,j;
	 l=strlen(a);
	 for(i=0;i<l;i++)
	 for(j=i+1;j<l;j++)
	 {if(a[j]+'0'<a[i]+'0')
	 {t=a[j];
	 a[j]=a[i];
	 a[i]=t;}
	 }
}
int main_bench()
{
	char a[10],b[10];
	my_scanf("%s %s",a,b);
	move(a);
	move(b);
	if(strcmp(a,b)==0)my_printf("YES");
	else my_printf("NO");
}


  
#define NUM_ITER 1504948

#include <header.h>

void sort(int a[],int n)
{
	int t,i;
	t=a[n-1];
	for(i=n-1;i>0;i--)
		a[i]=a[i-1];
    a[0]=t;
}
int main_bench()
{
	char s[300];
	int i,flag=0;
	gets(s);
	for(i=0;s[i]!='\0';i++)
		if(s[i]>='0'&&s[i]<='9') {my_printf("%c",s[i]); flag=1;}
		else if(flag==1) {my_printf("\n");flag=0;}

}
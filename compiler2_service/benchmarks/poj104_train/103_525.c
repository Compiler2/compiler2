#define NUM_ITER 1368061

#include <header.h>

char a[500];
int main_bench()
{
	char mark;
	int i,sum=0,flag;
	gets(a);
for(i=0;a[i]!=0;i++)
if(a[i]>='a'&&a[i]<='z')a[i]+='A'-'a';
	mark=a[0];
	for(i=0,flag=0;a[i]!=0;i++){
		if(a[i]!=mark){
			my_printf("(%c,%d)",mark,sum);
			sum=1;
			mark=a[i];
		}
		else sum++;
	}
	my_printf("(%c,%d)",mark,sum);
}
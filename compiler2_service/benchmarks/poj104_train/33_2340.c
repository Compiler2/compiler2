#define NUM_ITER 695

#include <header.h>

int main_bench()
{
int n, i, j,m;
char a[1000],b[1000];
my_scanf("%d\n",&n);
for(i=0;i<n;i++)
{
    for(j=0;1;j++)
    {
		a[j]=getchar();
		if(a[j]=='\n'){
			m=j;
			break;
		}
	}
	for(j=0;j<=m-1;j++){
		 switch(a[j])
        {
        case 'A':b[j]='T';break;
        case 'T':b[j]='A';break;
        case 'G':b[j]='C';break;
        case 'C':b[j]='G';break;
        }
    }
	for(j=0;j<=m-1;j++){
		my_printf("%c",b[j]);
	}
	putchar('\n');
	
}
return 0;
}
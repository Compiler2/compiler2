#define NUM_ITER 790063

#include <header.h>

char a[505],b[505][10];
int n;
void zi(char a[])
{
	int i,j,m;
	m=strlen(a);
	for(i=0;i<=m-n;i++)
	for(j=0;j<n;j++)
	b[i][j]=a[i+j];
}
main_bench()
{
	my_scanf("%d",&n);
	my_scanf("%s",a);
	zi(a);
	int m,c[505]={0},i,j,max;
    m=strlen(a);
    for(i=0;i<m;i++)
    for(j=0;j<i;j++)
    if(strcmp(b[i],b[j])==0)
    c[j]++;
    max=c[0];
    for(i=0;i<=m-n;i++)
    if(c[i]>max)
    max=c[i];
    if(max==0)
    my_printf("NO\n");
    else
    {
        my_printf("%d\n",max+1);
        for(i=0;i<=m-n;i++)
        if(c[i]==max)
        my_printf("%s\n",b[i]);
    }

}
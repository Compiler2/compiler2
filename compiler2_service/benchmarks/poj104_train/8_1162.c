#include <header.h>

int Compare(const void *elem1, const void *elem2)
{
    if(*(int *)elem1>*(int *)elem2)return 1;
    if(*(int *)elem1==*(int *)elem2)return 0;
    if(*(int *)elem1<*(int *)elem2)return -1;
}
int * shuru(int m,int *a)
{
	a=(int *)malloc(m*sizeof(int));
	int i;
	my_scanf("%d",&a[0]);
	for(i=1;i<m;i++)
	{
		my_scanf(" %d",&a[i]);
	}
	return a;
}
int main_bench()
{
    int suma,sumb,i;
    int *a;
    int *b;
    my_scanf("%d %d",&suma,&sumb);
    a=shuru(suma,a);
    b=shuru(sumb,b);
    qsort(a,suma,sizeof(int),Compare);
    qsort(b,sumb,sizeof(int),Compare);
    my_printf("%d",a[0]);
    for(i=1;i<suma;i++)
    {
    	my_printf(" %d",a[i]);
    }
    my_printf(" %d",b[0]);
    for(i=1;i<sumb;i++)
    {
    	my_printf(" %d",b[i]);
    }
    free(a);
    free(b);
}
#define NUM_ITER 10986

#include <header.h>

int na,nb;
int *a,*b;
void input()
{	
my_scanf("%d %d",&na,&nb);	
a=(int*)malloc(na*sizeof(int));	
b=(int*)malloc(nb*sizeof(int));	
for(int i=0;i<na;i++)		
my_scanf("%d",&a[i]);	
for(int i=0;i<nb;i++)	
my_scanf("%d",&b[i]);
} 

int pfC(const void *x ,const void *y)
{
    int t;
    t=*((int*)x)-*((int*)y); 
    return t;
}
void order()
{	
qsort(a,na,sizeof(int),pfC); 	
qsort(b,nb,sizeof(int),pfC); 
}

void print()
{	
my_printf("%d",a[0]);
for(int i=1;i<na;i++)
my_printf(" %d",a[i]);	
for(int i=0;i<nb;i++)	
my_printf(" %d",b[i]);
}

main_bench()
{	
input();
order();	
print();
}
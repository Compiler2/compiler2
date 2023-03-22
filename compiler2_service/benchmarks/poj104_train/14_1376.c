#define NUM_ITER 12695

#include <header.h>


struct stu* create();
int compare (const void * a, const void * b);
int main_bench()
{
	int i,j=0,n;
	my_scanf("%d", &n);
	struct stu{
			int num;
			int chi;
			int math;
			int total;
	};	
	struct stu *p=(struct stu*)calloc( n,sizeof(struct stu) );
	struct stu *a=p;
	int *tot=(int *)calloc( n, sizeof(int) );
	for(i=0;i<n;i++){
		my_scanf("%d %d %d", &p->num, &p->chi, &p->math);
		*(tot+i) = p->total = p->chi + p->math;
		p++;	
	}
	qsort(tot, n, sizeof(int), compare);
	for(i=0;i<3;i++,j=0){
		while( (a+(j++))->total != *(tot+i) )
			;
		my_printf("%d %d\n", (a+j-1)->num, (a+j-1)->total);
		(a+j-1)->total=-1;
	}
	
	return 0;

}

int compare (const void * a, const void * b)
{
  return ( *(int*)b - *(int*)a );
}
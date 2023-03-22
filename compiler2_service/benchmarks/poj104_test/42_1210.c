#include <header.h>


int main_bench()
{
	int n,k,a[100001],i;
	int time=0,first=1;
	void ahead(int *head,int *tail);
	void exchange(int *p,int *q);

	my_scanf("%d",&n);
	for(i=1;i<=n;i++)
		my_scanf("%d",a+i);
	my_scanf("%d",&k);

	for(i=1;i<n;i++){
		while(*(a+i)==k&&time<=n-i){
			ahead(a+i,a+n);
			time++;
		}
		time=0;
	}
	
	for(i=1;i<=n;i++){
		if(*(a+i)==k) break;
		if(first==1){
			my_printf("%d",*(a+i));
			first=0;
		}
		else my_printf(" %d",*(a+i));
	}

	my_printf("\n");
}

void exchange(int *p,int *q)
{
	int temp;
	temp=*p;
	*p=*q;
	*q=temp;
}

void ahead(int *head,int *tail)
{
	if(head==tail-1) exchange(head,tail);
	else{
		exchange(head,head+1);
		head++;
		ahead(head,tail);
	}
}
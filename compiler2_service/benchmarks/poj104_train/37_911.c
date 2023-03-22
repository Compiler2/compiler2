#define NUM_ITER 22380

#include <header.h>

int main_bench()
{
	char ltr[100000];
	int n;
	int i;
	char *p,*t;
	int count=0;
	int k=0;

	my_scanf("%d",&n);
	for(i=0;i<n;i++){
		my_scanf("%s",ltr);
		for(p=ltr;p<ltr+strlen(ltr);p++){
			for(t=ltr;t<ltr+strlen(ltr);t++){
				if(*t==*p){
					count++;
				}
			}
			if(count==1){
				k++;
				my_printf("%c\n",*p);
				break;
			}
			count=0;
		}
		if(k==0){
			my_printf("no\n");
		}
		count=0;
		k=0;
	}
	return 0;
}
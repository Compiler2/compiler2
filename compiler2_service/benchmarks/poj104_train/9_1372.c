#define NUM_ITER 12048

#include <header.h>


struct patient
{
	char id[10];
	int old;
} pt[100];

main_bench()
{
	int n,i,j,k,e,h;
	int yx[100],byx[100];
	my_scanf("%d",&n);

	j=0;
	k=0;
	for(i=0;i<n;i++){
		my_scanf("%s %d",&pt[i].id,&pt[i].old);
		if(pt[i].old>=60){
			yx[j]=i;
			j++;
		}
		else{
			byx[k]=i;
			k++;
		}

	}

	for(i=0;i<j;i++){
		for(h=0;h<j-1;h++){
			if(pt[yx[h]].old<pt[yx[h+1]].old){
				e=yx[h];
				yx[h]=yx[h+1];
				yx[h+1]=e;
			}
		}
	}

	for(i=0;i<j;i++){
		my_printf("%s\n",pt[yx[i]].id);
	}
	for(i=0;i<k;i++){
		my_printf("%s\n",pt[byx[i]].id);
	}
}

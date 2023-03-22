#define NUM_ITER 231365

#include <header.h>

void exchange(int (*p)[5],int x,int y);
int main_bench()
{
	int i,k,m,n;
	int square[5][5];
	for(k=0;k<=4;k++){
		for(i=0;i<=4;i++){
			my_scanf("%d",&(square[k][i]));
		}
	}
	my_scanf("%d%d",&m,&n);
	exchange(square,m,n);
	return 0;
}
void exchange(int (*p)[5],int x,int y)
{
	int e,i,k;
	if(x>=0&&x<=4&&y>=0&&y<=4){
		for(i=0;i<=4;i++){
			e=*(*(p+x)+i);
			*(*(p+x)+i)=*(*(p+y)+i);
			*(*(p+y)+i)=e;
		}
		for(i=0;i<=4;i++){
			for(k=0;k<=3;k++){
				my_printf("%d ",*(*(p+i)+k));
			}
			my_printf("%d\n",*(*(p+i)+4));
		}
	}else{
		my_printf("error");
	}
}

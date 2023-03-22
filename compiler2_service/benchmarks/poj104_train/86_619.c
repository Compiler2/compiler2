#define NUM_ITER 1254

#include <header.h>


int main_bench()
{
	int n,m,wrong_mark,i,j,time,mark;
	my_scanf ("%d",&n);
	for (i=0;i<n;i++){
		my_scanf("%d",&m);
		if(m==0){
			mark=60;
		}
		if(m!=0){
			for(j=1;j<m+1;j++){
				my_scanf("%d",&wrong_mark);
				time=wrong_mark+3*j;
				if(time<57&&wrong_mark<60-3*m){
					mark=wrong_mark+60-time;
				}
				if(time>=57&&wrong_mark<66-3*m){
					mark=wrong_mark;
				}
			}
		}my_printf("%d\n",mark);
	}
	return 0;
}


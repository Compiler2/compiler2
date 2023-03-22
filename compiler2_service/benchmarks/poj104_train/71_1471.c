#define NUM_ITER 7195

#include <header.h>

int main_bench()
{
	int n,i,j,y[200],m1[200],m2[200],d;
	int d1[13]={0,31,29,31,30,31,30,31,31,30,31,30,31};
	int d2[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
	my_scanf("%d",&n);
	for(i=0;i<n;i++){
		my_scanf("%d %d %d",&y[i],&m1[i],&m2[i]);
	}
	for(i=0;i<n;i++){
		d=0;
		if((y[i]%4==0&&y[i]%100!=0)||(y[i]%100==0&&y[i]%400==0)){
			if(m1[i]<m2[i]){
				for(j=m1[i];j<m2[i];j++){
					d+=d1[j];
				}
			}
			else{
				for(j=m2[i];j<m1[i];j++){
					d+=d1[j];
				}
			}
		}
		else{
            if(m1[i]<m2[i]){
				for(j=m1[i];j<m2[i];j++){
					d+=d2[j];
				}
			}
			else{
				for(j=m2[i];j<m1[i];j++){
					d+=d2[j];
				}
			}
		}
        if(d%7==0)  my_printf("YES\n");
		else  my_printf("NO\n");
        }
     return 0;
}


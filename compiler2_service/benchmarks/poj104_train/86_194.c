#define NUM_ITER 1456

#include <header.h>

int main_bench()
{
	int n, mis[100], sum[100][20], i, e, time, t;
	my_scanf("%d", &n);
    for(i=0;i<n;i++){
		my_scanf("%d", &mis[i]);
		for(e=0;e<mis[i];e++){
			my_scanf("%d", &sum[i][e]);
		}
	}
    for(i=0;i<n;i++){
		for(e=0;e<mis[i];e++){
            time=sum[i][e]+3*e;
			if(time<=60&&time>=57){
				t=sum[i][e];
				my_printf("%d\n", t);
				break;
			}
		    if(time>60){ 
			   t=60-3*e;
	           my_printf("%d\n", t);
			   break;
			}
		}
		if(time<57){
			t=60-3*mis[i];
			my_printf("%d\n", t);
		}
	}
	return 0;
}
#include <header.h>


int main_bench()
{   int n,i,k,a,time,all,ans,alltime;
    my_scanf("%d",&n);
	for(i=1;i<=n;i++){
		my_scanf("%d",&a);
		alltime=60; ans=0; time=0;
		for(k=1;k<=a;k++){
			my_scanf("%d",&all);
            if(all+k*3<=60){ time=all+k*3;
			    ans=all;
			}
			if(all+k*3==61) alltime=alltime-2;
             if(all+k*3==62) alltime=alltime-1;
		}
		ans=ans+(alltime-time);
		my_printf("%d\n",ans);
	}
	return 0;
}


#define NUM_ITER 7223

#include <header.h>

main_bench()
{
	int n,i,y,M,q,m,s;
	my_scanf("%d",&n);
	int b[200]={0};
	int a[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
	for(i=0;i<n;i++){
		my_scanf("%d%d%d",&y,&m,&M);
		if(m>M){
			q=m;
			m=M;
			M=q;
		}
		if((y%4==0&&y%100!=0)||y%400==0){
			
			a[2]=29;
			for(s=0,m;m<M;m++){
				s+=a[m];
			}
			if(s%7==0)
				b[i]=1;
			else
				b[i]=0;
		}

		else {
			a[2]=28;
			for(s=0,m;m<M;m++){
				s+=a[m];
			}
			if(s%7==0)
				b[i]=1;
			else
				b[i]=0;
		}
	}
	for(i=0;i<n;i++){
		if(b[i]==1){
			my_printf("YES\n");
		}
		else{
			my_printf("NO\n");
		}
	}

	return 0;

}
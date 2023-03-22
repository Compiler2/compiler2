#define NUM_ITER 11105

#include <header.h>

int main_bench(){
	int i,n,m,a,b,k,max;
	char c1,c2;
	char na[100][100];
	long sum,s[1000]={0};
	my_scanf("%d",&n);
	sum=0;max=0;
	for (i=0;i<n;i++){
		s[i]=0;
		my_scanf("%s %d %d %c %c %d",na[i],&a,&b,&c1,&c2,&k);
		if (a>80&&k>=1) s[i]+=8000;
		if (a>85&&b>80) s[i]+=4000;
		if (a>90) s[i]+=2000;
		if (a>85&&c2=='Y') s[i]+=1000;
		if (b>80&&c1=='Y') s[i]+=850;
	    sum+=s[i];
		if (max<s[i]) {max=s[i];m=i;}
	}
    my_printf("%s\n",na[m]);
	my_printf("%d\n",s[m]);
	my_printf("%d\n",sum);
	return 0;
}

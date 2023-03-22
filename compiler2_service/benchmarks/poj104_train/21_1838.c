#define NUM_ITER 4208

#include <header.h>


struct shu{
	int a;
	double b;
};

int main_bench(){
	struct shu s[301],t;
    int n,i,j,c=1;
	double avg,sum=0;
	my_scanf("%d",&n);
	for(i=0;i<n;i++){
		my_scanf("%d",&s[i].a);
	}
	for(i=0;i<n;i++){
		sum=sum+s[i].a;}
	avg=sum/n;
	for(i=0;i<n;i++){
		s[i].b=fabs(s[i].a-avg);}
	for(i=0;i<n;i++){
		for(j=0;j<n-i;j++){
			if(s[j].b<s[j+1].b){
				t=s[j];
				s[j]=s[j+1];
				s[j+1]=t;
			}
		}
	}
	for(i=1;i<n;i++){
		if(s[i].b==s[0].b) c++;
		else break;
	}
	for(i=0;i<c;i++){
		for(j=0;j<c-i-1;j++){
			if(s[j].a>s[j+1].a){
				t=s[j];
				s[j]=s[j+1];
				s[j+1]=t;
			}
		}
	}
	my_printf("%d",s[0].a);
	if(c>1){for(i=1;i<c;i++) my_printf(",%d",s[i].a);}
}
#define NUM_ITER 4409

#include <header.h>

int S(int a){
	int i,c=0;
	for(i=2;i<a;i++){
		if(a%i==0) c++;
	}
	if(c==0) return 1;
	else return 0;
}

int main_bench(){
	int n,i,j=0,k=0;
	my_scanf("%d",&n);
	int*s=(int*)malloc(sizeof(int)*n);
	for(i=2;i<=n;i++){
		if(S(i)){
			s[j]=i;
			j++;
		}
	}
	for(i=0;i<j-1;i++){
		if(s[i+1]-s[i]==2) {my_printf("%d %d\n",s[i],s[i+1]);k++;}
	}
	if(k==0) my_printf("empty");
	free(s);
	return 0;
}
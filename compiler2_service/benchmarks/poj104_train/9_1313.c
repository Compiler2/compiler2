#define NUM_ITER 5124

#include <header.h>


int main_bench()
{
	int n,i,j;
	struct s
	{char id[10];
	int age;
	};
	struct s S[100],Si;
	my_scanf("%d",&n);
	for(i=0;i<n;i++){
		my_scanf("%s%d",S[i].id,&S[i].age);
	}
	for(i=0;i<n-1;i++){
		for(j=0;j<n-i-1;j++){
			if(S[j+1].age>=60){
				if(S[j].age<S[j+1].age){
					Si=S[j];
					S[j]=S[j+1];
					S[j+1]=Si;
				}
			}
		}
	}
	for(i=0;i<n;i++){
		my_printf("%s\n",S[i].id);
	}
}
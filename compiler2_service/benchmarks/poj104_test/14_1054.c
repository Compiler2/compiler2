#define NUM_ITER 27325

#include <header.h>

int main_bench()
{
	int a=0,b=0,c=0;
	int an,bn,cn;
	int n,i,sum=0;
	struct student{
		int num,ch,math;
	}students[100000];
	my_scanf("%d",&n);
	for (i=0; i<n; i++){
		my_scanf("%d%d%d",&students[i].num, &students[i].ch, &students[i].math);
		sum = students[i].ch + students[i].math;
		if (sum > c){
			c = sum;
			cn = i;
		}
		if (sum > b){
			c = b;
			cn = bn;
			b = sum;
			bn = i;

		}
		if (sum > a){
			b = a;
			bn =an;
			a = sum;
			an = i;
		}
	}
	my_printf("%d %d\n",students[an].num,a);
	my_printf("%d %d\n",students[bn].num,b);
	my_printf("%d %d\n",students[cn].num,c);






		 
	return 0;
}

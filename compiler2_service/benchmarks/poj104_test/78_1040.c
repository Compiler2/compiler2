#define NUM_ITER 56675

#include <header.h>

int z,q,l,s;
int a[5];
void print()
{
	for(int j = 1;j <= 4;j ++){
		int max = 0;
		int flag = 0;
		for(int i = 1;i <= 4;i ++){
			if(a[i] > max){
				max = a[i];
				flag = i;
			}
		}
		a[flag] =  - 1;
		if(max == z) my_printf("z %d\n",z);
		if(max == q) my_printf("q %d\n",q);
		if(max == s) my_printf("s %d\n",s);
		if(max == l) my_printf("l %d\n",l);
	}
}
			
		
int main_bench()
{
	for(z = 10;z <= 50;z = z + 10)
		for(q = 10;q <= 50;q = q + 10)
			for(s = 10;s <= 50;s = s + 10)
				for(l = 10;l <= 50;l = l + 10)
					if(z + q == s + l && z + l > s + q && z + s < q){
						a[1] = z;
						a[2] = q;
						a[3] = s;
						a[4] = l;
						print();
					}
	return 0 ;
}
 
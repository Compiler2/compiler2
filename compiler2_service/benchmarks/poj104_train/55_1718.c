#include <header.h>

int main_bench()
{
	int a,b;
	long  ans = 0;
	char x[20] = {0};
	my_scanf("%d %s %d",&a,x,&b);
	if(a == b) my_printf("%s\n",x);
	
	else{
		long flag = 1;
		for(int i = strlen(x) - 1;i >= 0;i --){
			long temp;
			if(x[i] >= '0' && x[i] <= '9') temp = x[i] - '0';
			if(x[i] >= 'A' && x[i] <= 'Z') temp = x[i] - 'A' + 10;
			if(x[i] >= 'a' && x[i] <= 'z') temp = x[i] - 'a' + 10;
			ans += temp * flag;
		
			flag *= a;
		}
		if(ans == 0) my_printf("0\n");
		else{
		
			long final[100] = {0};
			flag = 0;
			while(ans > 0){
				flag ++;
				final[flag] = ans % b;
				ans /= b;
			}
			for(int i = flag;i >= 1;i --){
				if(final[i] >= 10){
					my_printf("%c",final[i] - 10 + 'A');
				}
				else my_printf("%ld",final[i]);
			}
			my_printf("\n");
		}
	}
	return 0;
}
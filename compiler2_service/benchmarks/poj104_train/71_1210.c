#define NUM_ITER 7339

#include <header.h>

int shirunnian(int a)
{
	if(a%4!=0){
		return 0;
	}
	else {
		if(a%100==0&&a%400!=0){
			return 0;
		}
		else{
			return 1;
		}
	}
}
int main_bench()
{
    int n,i,b[13]={0,31,28,31,30,31,30,31,31,30,31,30,31},
		c[13]={0,31,29,31,30,31,30,31,31,30,31,30,31},
		d,e,f,s,sum=0;
    my_scanf("%d",&n);
	while (n>0){
                  sum=0;
		my_scanf("%d%d%d",&d,&e,&f);
        if(e>f){
			s=e;
			e=f;
			f=s;
		}
		if(shirunnian(d)==1){
			for(i=e;i<f;i++){
            sum+=c[i];
			}
			if(sum%7==0){
				my_printf("YES\n");
			}
			else {
				my_printf("NO\n");
			}
		}
		else{
			for(i=e;i<f;i++){
            sum+=b[i];
			}
			if(sum%7==0){
				my_printf("YES\n");
			}
			else {
				my_printf("NO\n");
			}
		}
        n--;
	}
	return 0;
}


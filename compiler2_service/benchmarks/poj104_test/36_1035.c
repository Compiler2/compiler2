#define NUM_ITER 34192

#include <header.h>





int main_bench()
{
	char a[1000],b[1000];
	my_scanf("%s %s",a,b);
	int lena=strlen(a);
	int lenb=strlen(b);
	if(lena!=lenb){
		my_printf("NO");
	}
	else{
		int i,j,k=0,num=0,count=0;
		int same=0,tong[1000];
		for(i=0;i<1000;i++){
			tong[i]=0;
		}
		for(i=0;i<lena;i++){
			for(j=i+1;j<lena;j++){
				if(a[i]==a[j]){
					tong[k]++;
					num++;
				}
			}
		}
		for(i=0;i<num;i++){
			same=same+tong[i]+1;
		}
		for(i=0;i<lena;i++){
			for(j=0;j<lenb;j++){
				if(a[i]==b[j]){
					count++;
				}
			}
		}
		if(count==lena+same){
			my_printf("YES");
		}
		else{
			my_printf("NO");
		}
	}
	return 0;
}


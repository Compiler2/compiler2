#define NUM_ITER 1058591

#include <header.h>






int main_bench()
{
	char s[50],w[50];
	int l1,l2,i,j,count=0;
	my_scanf("%s%s",s,w);
	l1=strlen(s);
	l2=strlen(w);
	for(i=0;i<l2;i++){
		if(*s==*(w+i)){
			for(j=1;j<l1;j++){
				if(*(s+j)==*(w+i+j)){
					count++;
				}
			}
			if(count==l1-1){
				my_printf("%d\n",i);
			}
		}
	}
			return 0;
}



#define NUM_ITER 1299432

#include <header.h>

int main_bench()
{
	char s[10000],q[2]=" ";
	int i,e=0,j=0,a[300],k=0;
	gets(s);
	strcat(s,q);
	for(i=0;s[i]!='\0';i++){
		if(s[i]!=' '){
			j++;
			e=0;
		}else{
			e++;
			if(e==1){
				a[k]=j;
				k++;
			}
			j=0;
		}
	}
	for(i=0;i<k-1;i++){
        my_printf("%d,",a[i]);
	}
	my_printf("%d",a[k-1]);
	return 0;
}
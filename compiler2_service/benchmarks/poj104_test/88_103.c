#define NUM_ITER 1380719

#include <header.h>

int main_bench(){

	int i,s,e,n;
	char a[30];
	gets(a);
	n=strlen(a);
	for(s=0;s<n;s++){
		if((s==0&&a[s]<='9'&&a[s]>='0')||(a[s]<='9'&&a[s]>='0')&&(a[s-1]>'9'||a[s-1]<'0')){
		    e=s;
			while(e!=n){
				if(a[e+1]>'9'||a[e+1]<'0')
					break;
				e++;
			}
			for(i=s;i<=e;i++)
				my_printf("%c",a[i]);
			my_printf("\n");
		}
	}
	return 0;
}
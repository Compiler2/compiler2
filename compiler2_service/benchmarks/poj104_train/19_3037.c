#define NUM_ITER 842184

#include <header.h>

int main_bench()
{
	int i,n,q,j,k,flag=0;
	char a[102],b[102],c[102];
	gets(a);
	gets(b);
	gets(c);
	n=strlen(b);
	q=strlen(c);
	for(i=0;i<strlen(a);i++){
		if((a[i-1]==' ')||((a[i]>='A')&&(a[i]<'a'))){
			for(j=0;j<n;j++)
				if(a[i+j]!=b[j]){
				flag=1;
				break;}
				if(flag==0){
					for(k=0;k<q;k++)
						my_printf("%c",c[k]);
					i=i+n-1;
				}
			else{
				my_printf("%c",a[i]);
				flag=0;
			}
		}
			else{
				my_printf("%c",a[i]);
				flag=0;
			}
	}
	return 0;
}
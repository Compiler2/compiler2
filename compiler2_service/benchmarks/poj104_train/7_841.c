#define NUM_ITER 896057

#include <header.h>

int main_bench()
{
	char a[300],b[50],c[50];
	int n,i,j,m,k,s=0,d,e;
	my_scanf("%s\n%s\n%s",a,b,c);
	n=strlen(b);
	m=strlen(a);
	for(i=0;i<m;i++){
		s=0;
		for(j=i,k=0;k<n;j++,k++){
			
			if(a[j]!=b[k]){
				 s=1; 
				 break;
			}
		} 
		if(s==0) break;}
		
		if(s==0){ 
			for(d=i,e=0;d<i+n;d++,e++){
	            a[d]=c[e];}}
			my_printf("%s",a);
			
		
		
	
    return 0;
}

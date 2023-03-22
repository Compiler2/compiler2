#include <header.h>

int main_bench(){
	char s[100],a[100],b[100];
	gets(s);
	my_scanf("%s\n%s",a,b);
	int n,m,j;
	n=strlen(s);
	m=strlen(a);
	int i=0;
	while(i<n){
		int p=0;
		if((a[0]==s[i])&&((s[i-1]==' ')||(i==0))){
			for(j=1;j<m;j++){
				if(a[j]!=s[i+j]){
					my_printf("%c",s[i]);
					i=i+1;
					break;
				}else
					p++;
			}
	        if((p==m-1)&&((s[i+m]==' ')||(i+m==n))){
		    	my_printf("%s",b);
		    	i+=m;
			}else{
		    	my_printf("%c",s[i]);
		    	i++;
			}	
		}else{
             my_printf("%c",s[i]);
			 i=i+1;
		}
	}
	return 0;
}

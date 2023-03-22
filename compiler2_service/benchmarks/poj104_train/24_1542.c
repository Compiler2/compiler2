#include <header.h>

int main_bench(){
	char zfc[3000];
	gets(zfc);
	int n=strlen(zfc),w;
	for(w=0;w<=n;w++){
		if(zfc[w]==' '||zfc[w]==','||zfc[w]=='\0'){
			break;
		}
	}
	if(w==n){my_printf("%s\n%s",zfc,zfc);}
	else{
	  int b,d,k,j;
	  int a=-1,c=-1;
	  b=w;
	  d=w;
	  k=w;
	  int i;
	  for(i=b+1;i<n;i++){
		if((zfc[i]==' '||zfc[i]==',')&&zfc[i+1]!=' '&&zfc[i+1]!=','){
			j=k;
			k=i;
			if(k-j>b-a){
				a=j;
				b=k;
			}
			else{
			   if(k-j<d-c){
				c=j;
				d=k;
			   }
			}
		}
	  }
	 if(n-k>b-a){a=k;b=n;}
	 if(n-k<d-c){c=k;d=n;}
	 int p,q;
	 for(p=a+1;p<b-1;p++){
		my_printf("%c",zfc[p]);
	 }
	 my_printf("%c\n",zfc[b-1]);
	 for(q=c+1;q<d;q++){
		my_printf("%c",zfc[q]);
	 }
	}
	return 0;
}

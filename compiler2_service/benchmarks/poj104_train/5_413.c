#include <header.h>

int main_bench(){
	int i,n;
	double x,t=0;
	 my_scanf("%lf",&x);
	char a[500],b[500];
	my_scanf("%s %s",a,b);
	if(strlen(a)!=strlen(b)) my_printf("error");
	else{
		n=strlen(a);
		for(i=0;a[i]!='\0'&&b[i]!='\0';i++){
           if((a[i]=='A'||a[i]=='T'||a[i]=='C'||a[i]=='G')&&(b[i]=='A'||b[i]=='T'||b[i]=='C'||b[i]=='G')){
		       if(a[i]==b[i]) t++;
		   }else{
			  my_printf("error");
			  return 0;
		   }
		}
		if(t/n>x) my_printf("yes");
		else my_printf("no");
	}
  return 0;
}

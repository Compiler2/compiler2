#include <header.h>

int main_bench()
{
	int i,l,j=0,l1,l2,e=0;
	char a[256],b[256],c[256],d[256];
	my_scanf("%s",a);
    my_scanf("%s",b);
	my_scanf("%s",c);
	l=strlen(a);
	l1=strlen(b);
	l2=strlen(c);
	for(i=0;a[i]!='\0';i++){
		if(e==0){
		if(a[i]==b[j]){
			d[j]=a[i];
			j++;
		}else{
			if(j!=0&&e!=1){
				d[j]='\0';
				my_printf("%s",d);
			}
			j=0;
			my_printf("%c",a[i]);
		}
		if(j==l1&&e==0){
			my_printf("%s",c);
			i=i-l1+l2;
			e=1;
		}
		}else{
			my_printf("%c",a[i]);
		}
	}
	return 0;
}
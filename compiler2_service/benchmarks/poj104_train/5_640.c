#include <header.h>

int main_bench(){
	int b,c,i,j,count;
	double a,x,y,z;
	char m[550],n[550];
	my_scanf("%lf\n%s\n%s\n",&a,m,n);
	b=strlen(m);
	c=strlen(n);
	if(b!=c)
		my_printf("error");
	j=0;
	if(b==c){
		for(i=0;m[i]!='\0';i++){
			if(m[i]!='A'&&m[i]!='T'&&m[i]!='C'&&m[i]!='G')
				j++;
		}
		for(i=0;n[i]!='\0';i++){
			if(n[i]!='A'&&n[i]!='T'&&n[i]!='C'&&n[i]!='G')
				j++;
		}
		if(j>0)
			my_printf("error");
	}
	count=0;
	if(b==c&&j==0){
		for(i=0;m[i]!='\0';i++){
			if(m[i]==n[i])
				count++;
		}
		y=count;
		z=b;
		x=z*a;
		if(y>=x)
			my_printf("yes");
		else
			my_printf("no");
	}
	return 0;
}
#define NUM_ITER 923874

#include <header.h>

int main_bench()
{  
	int i=0,t=0,j,h=0,k=0,m=0;
	char b[2][500];
	double n;
	my_scanf("%lf",&n);
	for(j=0;j<2;j++){
	my_scanf("%s",b[j]);
	}
	for(j=0;b[0][j]!='\0';j++){h++;}
    for(j=0;b[1][j]!='\0';j++){k++;}
	for(j=0;(b[0][j]!='\0')&&(b[1][j]!='\0');j++) 
	{ if((b[0][j]!='A'&&b[0][j]!='T'&&b[0][j]!='C'&&b[0][j]!='G')||(b[1][j]!='T'&&b[1][j]!='G'&&b[1][j]!='C'&&b[1][j]!='A')) 
	{ my_printf("error");m=1;break;}}
	if(m==0){
		if(h!=k){ my_printf("error");}

	else {
		for(j=0;(b[0][j]!='\0')&&(b[1][j]!='\0');j++){                            
		t++;
		if(b[0][j]==b[1][j]) {i++;}
		}
	if((1.0*i/t)<=n) {  my_printf("no");} 
	else {my_printf("yes");}
	}
	}
   return 0;
}
#include <header.h>

int main_bench(){
	int i,b,n,m,x,y,simida;
	int a[10][10];

	for(y=0;y<5;y++){
		for(x=0;x<5;x++){
			my_scanf("%d",&a[y][x]);}}
	my_scanf("%d %d",&n,&m);
	if(n<5&&m<5){
		for(x=0;x<5;x++){
			simida=a[n][x];
			a[n][x]=a[m][x];
			a[m][x]=simida;}
			for(y=0;y<5;y++){
				for(x=0;x<5;x++){
					if(x==4){my_printf("%d\n",a[y][x]);}
					else {my_printf("%d ",a[y][x]);}}}
	}
	else {my_printf("error");}

		  return 0;
}

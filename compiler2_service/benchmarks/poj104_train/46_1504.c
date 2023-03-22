#include <header.h>

int main_bench(){
	int h,l,i,k,n,hsx,hxx=0,lsx,lxx=0;
	int shu[100][100];
	my_scanf("%d%d",&h,&l);
	for(i=0;i<h;i++){
		for(k=0;k<l;k++){
			my_scanf("%d",&(shu[i][k]));
		}
	}
	hsx=h-1;
	lsx=l-1;
	for(n=0;(hsx>hxx)&&(lsx>lxx);n++){
		for(k=lxx;k<lsx;k++){
			my_printf("%d\n",shu[hxx][k]);
		}
		for(i=hxx;i<hsx;i++){
			my_printf("%d\n",shu[i][lsx]);
		}
		for(k=lsx;k>lxx;k--){
			my_printf("%d\n",shu[hsx][k]);
		}
		for(i=hsx;i>hxx;i--){
			my_printf("%d\n",shu[i][lxx]);
		}
		hsx--;
		hxx++;
		lsx--;
		lxx++;
	}
	    if((hxx==hsx)&&(lsx>lxx)){
			for(k=lxx;k<=lsx;k++){
				my_printf("%d\n",shu[hxx][k]);
			}
		}
		else if((lxx==lsx)&&(hsx>hxx)){
			for(i=hxx;i<=hsx;i++){
				my_printf("%d\n",shu[i][lxx]);
			}
		}
		else if((hsx==hxx)&&(lsx==lxx)){
			my_printf("%d",shu[hxx][lxx]);
		}

	return 0;
}

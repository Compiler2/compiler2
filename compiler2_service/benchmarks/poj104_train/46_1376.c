#define NUM_ITER 584

#include <header.h>

int main_bench()
{int sz[100][100];
int hang,lie;
my_scanf("%d %d",&hang,&lie);
for(int a=0;a<hang;a++){
	for(int b=0;b<lie;b++){
	  my_scanf("%d",&sz[a][b]);
	}
}
int c,d,e,f;
int hs=0,ls=0;
int hz=hang-1,lz=lie-1;
while(hs<=hz&&ls<=lz)
{if(hs!=hz&&lz!=ls)
	{for(c=ls;c<=lz-1;c++){
	  my_printf("%d\n",sz[hs][c]);
	}
	for(d=hs;d<=hz-1;d++){
	  my_printf("%d\n",sz[d][lz]);
	}
	for(e=lz;e>=ls+1;e--){
	  my_printf("%d\n",sz[hz][e]);
	}
    for(f=hz;f>=hs+1;f--){
	  my_printf("%d\n",sz[f][ls]);
}}

else{for(int m=hs;m<=hz;m++){
	  for(int n=ls;n<=lz;n++){
	    my_printf("%d\n",sz[m][n]);
	}
}}
	hs++;
	ls++;
	hz--;
	lz--;
}
	
return 0;
}
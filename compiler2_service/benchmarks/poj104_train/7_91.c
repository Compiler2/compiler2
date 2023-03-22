#define NUM_ITER 782218

#include <header.h>

char q[100],a[100],b[100],xc[50][100];
main_bench(){
    my_scanf("%s",&q);
	my_scanf("%s",&a);
	my_scanf("%s",&b);
	int i=0,j=0,k=0,s=0,p=0,qc,ac,bc,r,js=0,sz[100]={0},x,y,z,npc;
	qc=strlen(q);
	ac=strlen(a);
	bc=qc-ac;
	for (i=0;i<bc+1;i++){
		
		for (j=0;j<ac;j++){
		  xc[i][j]=q[j+k];
		}
		k++; 
		p=strcmp(xc[i],a);
		if (p==0){
		sz[js]=i;
		js++;
		}
	
	}
	npc=sz[0];
	
	if (js==0){
	my_printf("%s\n",q);
	}
	if (js!=0){
		for (x=0;x<npc;x++){
			my_printf("%c",q[x]);
		}
			my_printf("%s",b);
		for (z=npc+ac;z<qc;z++){
			my_printf("%c",q[z]);
		}
	}
	return 0;

}


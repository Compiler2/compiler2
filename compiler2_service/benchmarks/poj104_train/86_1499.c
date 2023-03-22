#include <header.h>

int main_bench(){
	int a,b,c,d[1000][60],f,g;
	my_scanf("%d",&a);
	for(b=0;b<a;b++){
		my_scanf("%d",&d[b][0]);
		for(c=0;c<d[b][0];c++){
			my_scanf("%d",&d[b][c+1]);
		}
	}
	for(b=0;b<a;b++){
			if(d[b][0]==0){
				my_printf("60\n");
			}
			else {
				f=d[b][0];
				if(f==1){
					if(d[b][f]>57){
						my_printf("%d\n",d[b][f]);
					}
					else{
						my_printf("57\n");
					}
				}
				else{
					for(c=1;c<=d[b][0];c++){
					g=d[b][c]+3*c;
					if(g>60){
						if(g>62){
							my_printf("%d\n",60-3*(c-1));
						}
						else{
							my_printf("%d\n",d[b][c]);
						}
						break;
					}
					if(c==d[b][0]&&g<=60){
						my_printf("%d\n",60-3*c);
					}
					}
				}
			}
	}
	return 0;
}
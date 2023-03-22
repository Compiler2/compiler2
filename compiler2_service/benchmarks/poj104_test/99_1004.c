#include <header.h>

int main_bench(){
    int sz[100];
	int n,i,s1,s2,s3,s4;
	s1=s2=s3=s4=0;
	my_scanf("%d",&n);
		for(i=0;i<n;i++){
			my_scanf("%d",&sz[i]);
		}
		for(i=0;i<n;i++){
			if(sz[i]<=18){
				s1++;
			}else if(sz[i]>18&&sz[i]<=35){
				s2++;
			}else if(sz[i]>=36&&sz[i]<=60){
				s3++;
			}else{
				s4++;
			}
		}
		my_printf("1-18: %.2lf%%\n",100*(double)s1/n);
		my_printf("19-35: %.2lf%%\n",100*(double)s2/n);
		my_printf("36-60: %.2lf%%\n",100*(double)s3/n);
		my_printf("60??: %.2lf%%\n",100*(double)s4/n);
    return 0;
}

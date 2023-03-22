#include <header.h>

int main_bench(){
int n,a,num,c;
    my_scanf("%d",&n);
    for(c=0;c<n;c++)
    {
    int m;
    my_scanf("%d",&m);
	if(m==0){ 
		num=60;
		my_printf("%d\n",num);
	}
    else{
    int*shuzu=(int*)malloc(sizeof(int)*m);
    for(a=0;a<m;a++)
    {
       my_scanf("%d",&shuzu[a]);
     }
    if(shuzu[m-1]>60-3*(m-1)-1)
	{       
        int b=m-2;
		int i;
        for(i=b;i>=0;i--)
		{
            if(shuzu[i]>60-3*i-1) continue;
            if((shuzu[i]<=60-3*i-1)&&(shuzu[i]>60-3*i-3)){ 
				num=shuzu[i];
				break;
			}
			if(shuzu[i]<=60-3*i-3){
				num=60-3*i-3;
				break;
			}
		}
	}
    
    if((shuzu[m-1]<=60-3*(m-1)-1)&&(shuzu[m-1]>60-3*(m-1)-3)) num=shuzu[m-1];
    if(shuzu[m-1]<=60-3*(m-1)-3) num=60-3*(m-1)-3;
	
	my_printf("%d\n",num);
    free(shuzu);
	}
	}
    
    return 0;
}

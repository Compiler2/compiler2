#define NUM_ITER 181

#include <header.h>

int main_bench()
{
	int m,n,k,i,j,count=0;
	for(k=0;;k++)
	{
		my_scanf("%d%d",&n,&m);
		if(m!=0&&n!=0)
		{
			int *num=(int*)malloc(sizeof(int)*n);
			for(i=0;i<n;i++)
				*(num+i)=i+1;

			i=0;
			for(j=0;j<n-1;j++)                    
			{
				for(;;){
					if(*(num+i)==0)
						i=(i+1)%n;              
					else{
				        count++;
				        if(count==m)
						{
							*(num+i)=0;
							count=0;
							i=(i+1)%n;
						    break;
						}
					    else i=(i+1)%n;
					}                          
				}
			}
		   for(i=0;i<n;i++)
		   {
			   if(*(num+i)!=0){
				   my_printf("%d\n",num[i]);         
				   break;
			   }
		   }
		   free(num);
		}
		else
			break;
	}
	
	return 0;
}
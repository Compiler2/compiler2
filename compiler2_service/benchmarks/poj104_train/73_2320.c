#define NUM_ITER 181744

#include <header.h>

int main_bench(){	
int h,z,s;	
s=0;	
int sz[5][5],max[5],min[5];	
for(h=0;h<5;h++)	{	
	for(z=0;z<5;z++)	
	{			my_scanf("%d",&sz[h][z]);		}	}		for(h=0;h<5;h++){			
max[h]=sz[h][0];			
for(z=0;z<5;z++){			
	if(sz[h][z]>max[h]){		
		max[h]=sz[h][z];	
			}	
		}		
}		
for(z=0;z<5;z++){		
	min[z]=sz[0][z];	
		for(h=0;h<5;h++){	
			if(sz[h][z]<min[z]){	
			min[z]=sz[h][z];	
			}			
}	
	}	
for(h=0;h<5;h++){		
for(z=0;z<5;z++){		
	if(min[z]==max[h]){	
			my_printf("%d %d %d",h+1,z+1,max[h]);
				s++;		
	}	
	}
	}	
if(s==0){		
my_printf("not found");	}	
return 0;
}
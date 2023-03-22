#define NUM_ITER 23773

#include <header.h>

int main_bench()


{
	int n,i,j;
         
         float y=0,z=0;

	my_scanf("%d",&n);

	int sz[2][n];
    
	float x;

	for(i=0;i<n;i++)

	{
		my_scanf("%d",&sz[0][i]);

		y+=sz[0][i];

	}
    

	for(j=0;j<n;j++)

	{
		my_scanf("%d",&sz[1][j]);

		if(sz[1][j]>=90&&sz[1][j]<=100)x=4.0*sz[0][j];

		if(sz[1][j]>=85&&sz[1][j]<=89)x=3.7*sz[0][j];

		if(sz[1][j]>=82&&sz[1][j]<=84)x=3.3*sz[0][j];

		if(sz[1][j]>=78&&sz[1][j]<=81)x=3.0*sz[0][j];

		if(sz[1][j]>=75&&sz[1][j]<=77)x=2.7*sz[0][j];

        if(sz[1][j]>=72&&sz[1][j]<=74)x=2.3*sz[0][j];

			if(sz[1][j]>=68&&sz[1][j]<=71)x=2.0*sz[0][j];

				if(sz[1][j]>=64&&sz[1][j]<=67)x=1.5*sz[0][j];

					if(sz[1][j]>=60&&sz[1][j]<=63)x=1.0*sz[0][j];
					if(sz[1][j]<60)x=0*sz[0][j];
    z+=x;

	}

	

	float GPA;

	GPA=z/y;

my_printf("%.2f",GPA); 

return 0;

}
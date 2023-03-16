#include <header.h>

int minih(int numh,int *p)
		hang=n;
		lie=n;
		sum=0;
		
		for(j=1;j<=n;j++)
		{
			for(k=1;k<=n;k++)
			{
				scanf("%d",p+101*(j-1)+k-1);
			}
		}
		
		for(minor=1;lie>1;minor++)
		{
			
			for(j=1;j<=hang;j++)
			{
				int minihang;
				
				minihang=minih(lie,(p+101*(j-1)));
				for(k=1;k<=lie;k++)
				{
					*(p+101*(j-1)+k-1)-=minihang;
				}
			}
			
			for(j=1;j<=lie;j++)
			{
				int minilie;
				
				minilie=minil(hang,(p+(j-1)));
				for(k=1;k<=hang;k++)
				{
					*(p+(j-1)+101*(k-1))-=minilie;
				}
			}
			sum+=*(p+102);
			
			for(j=2;j<=hang;j++)
			{
				for(k=1;k<=lie;k++)
				{
					*(p+101*(j-1)+k-1)=*(p+101*j+k-1);
				}
			}
			hang--;
			
			for(j=2;j<=lie;j++)
			{
				for(k=1;k<=hang;k++)
				{
					*(p+101*(k-1)+j-1)=*(p+101*(k-1)+j);
				}
			}
			lie--;
		}
		printf("%d\n",sum);
	}
	return 0;
}
#define NUM_ITER 26900

#include <header.h>

int main_bench()
{
	struct student{
		int ID,Ch,Ma;
	}temp;
    int fID=0,fG=0,sID=0,sG=0,tID=0,tG=0;
	int n;
	my_scanf("%d",&n);
	int i;
	for(i=0;i<n;i++)
	{
		int sum=0;
		my_scanf("%d%d%d",&temp.ID,&temp.Ch,&temp.Ma);
        sum=temp.Ch+temp.Ma;
        if(sum==fG)
		{
            tG=sG;
			tID=sID;
			sG=sum;
			sID=temp.ID;
		}
		if(sum>fG)
		{
			tG=sG;
			tID=sID;
			sG=fG;
			sID=fID;
			fG=sum;
			fID=temp.ID;
		}
		if(sum<fG&&sum>sG)
		{
			tG=sG;
			tID=sID;
			sG=sum;
			sID=temp.ID;
		}	
		if(sum<sG&&sum>tG)
		{
			tG=sum;
			tID=temp.ID;
		}
	}
	my_printf("%d %d\n",fID,fG);
	my_printf("%d %d\n",sID,sG);
	my_printf("%d %d\n",tID,tG);

	return 0;
}
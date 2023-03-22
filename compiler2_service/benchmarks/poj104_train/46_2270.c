#include <header.h>

int main_bench()
{
	int a[105][105];
	int flag=1,loci=0,locj=0,row,col,upwall=0,downwall,rightwall,leftwall=-1,i,j;
	my_scanf("%d %d",&row,&col);
	for(i=0;i<row;i++)
		for(j=0;j<col;j++)
			my_scanf("%d",&a[i][j]);
	rightwall=col;
	downwall=row;
	for(i=1;i<row*col;){
		if(locj+1<rightwall&&flag==1){my_printf("%d\n",a[loci][locj++]);i++;}
		else if(locj-1>leftwall&&flag==2){my_printf("%d\n",a[loci][locj--]);i++;}
		else if(loci+1<downwall&&flag==3){my_printf("%d\n",a[loci++][locj]);i++;}
		else if(loci-1>upwall&&flag==4){my_printf("%d\n",a[loci--][locj]);i++;}
		else if(locj+1==rightwall&&flag==1){
			rightwall--;
			flag=3;
		}
		else if(locj-1==leftwall&&flag==2){
			leftwall++;
			flag=4;
		}
		else if(loci+1==downwall&&flag==3){
			downwall--;
			flag=2;
		}
		else if(loci-1==upwall&&flag==4){
			upwall++;
			flag=1;
		}
	}
	my_printf("%d\n",a[loci][locj]);
}
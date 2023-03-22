#include <header.h>

int main_bench()
{
	int a[110][110],row,col,i,j,k,l=0,s=0;;
	my_scanf("%d %d",&row,&col);
	for(i=0;i<row;i++){
	for(j=0;j<col;j++)my_scanf("%d",&a[i][j]);}

	for(i=1;l<row*col;i++){
	k=i%4;
	if(k==1){
			if(s<col-s-1)
				for(j=s;j<col-s-1;j++){my_printf("%d\n",a[s][j]);l++;	if(l==row*col)break;}
			if(s==col-s-1)continue;
}
	
	if(k==2){
			if(s<row-s-1)
				for(j=s;j<row-s-1;j++){my_printf("%d\n",a[j][col-s-1]);l++;if(l==row*col)break;}
			if(s==row-s-1)continue;
		}
	
	if(k==3){
			if(s<col-s-1)
				for(j=col-s-1;j>s;j--){my_printf("%d\n",a[row-s-1][j]);l++;if(l==row*col)break;}
			if(s==col-s-1)continue;
		}

	if(k==0){
			if(s<row-s-1)
				for(j=row-s-1;j>s;j--){my_printf("%d\n",a[j][s]);l++;if(l==row*col)break;}
			if(s==row-s-1&&l==row*col-1){my_printf("%d\n",a[s][s]);l++;}
			if(s==row-s-1&&l!=row*col-1)continue;
		}
	
	if(k==0)s++;

	}
	return 0;
}
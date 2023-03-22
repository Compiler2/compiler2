#include <header.h>



int main_bench()
{
	int h,l;

	int t=1;

	int fah=-1,fal=-1;

	my_scanf("%d,%d",&h,&l);

	int i,j;
	
	int **word;
	word=(int **)malloc(sizeof(int *)*h);
	for(i=0;i<h;i++){
		word[i]=(int *)malloc(sizeof(int)*l);
	}

	int *max;
	max=(int *)malloc(sizeof(int)*h);

	int *al;
	al=(int *)malloc(sizeof(int)*h);


	for(i=0;i<h;i++){
		max[i]=0;
		al[i]=0;
	}

	for(i=0;i<h;i++){
		for(j=0;j<l;j++){
			my_scanf("%d",&word[i][j]);
			if(max[i]<word[i][j]){
				max[i]=word[i][j];
				al[i]=j;
			}
		}
	}

	for(i=0;i<h;i++){
		t=1;
		for(j=0;j<h;j++){
			if(max[i]>word[j][al[i]]){
				t=0;
				break;
			}
		}
		if(t!=0){
			fah=i;
			fal=al[i];
			break;
		}
	}

	if(fah!=-1||fal!=-1){
		my_printf("%d+%d\n",fah,fal);
	}
	else{
		my_printf("No\n");
	}

	free(*word);
	free(max);
	free(al);

	return 0;
}
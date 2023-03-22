#define NUM_ITER 8508

#include <header.h>



int main_bench()
{   
	struct stu
	{  char name[20];
       int fen;
	   int ban;
	   char gan[1];
	   char xi[1];
       int wen;
	}s[100];
	int n,i,j,money=0,mon=0,mona=0;
	my_scanf("%d",&n);
    for (i=0;i<n;i++){
		my_scanf("%s",s[i].name);
        my_scanf("%d",&s[i].fen);
		my_scanf("%d",&s[i].ban);
		my_scanf("%s",s[i].gan);
		my_scanf("%s",s[i].xi);
		my_scanf("%d",&s[i].wen);
		if (s[i].fen>80&&s[i].wen>=1)
			money=money+8000;
		if (s[i].fen>85&&s[i].ban>80)
			money=money+4000;
		if (s[i].fen>90)
			money=money+2000;
		if (s[i].fen>85&&s[i].xi[0]=='Y')
			money=money+1000;
		if (s[i].ban>80&&s[i].gan[0]=='Y')
			money=money+850;
        if (money>mon){
			mon=money;
			j=i;
		}
		mona=mona+money;
		money=0;
	}
		my_printf("%s\n",s[j].name);
        my_printf("%d\n",mon);
        my_printf("%d\n",mona);
	return 0;
}

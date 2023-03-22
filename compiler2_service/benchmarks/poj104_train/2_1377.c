#include <header.h>

struct a{
int n;
char s[27];
}b[1000];
int main_bench()
{
	int n;
	my_scanf("%d",&n);
	int i,k;
	for(i=0;i<n;i++)
	{
		my_scanf("%d %s",&b[i].n,b[i].s);
	}
	int c[26]={0};
	for(i=0;i<n;i++)
	{
		for(k=0;b[i].s[k];k++)
		{switch(b[i].s[k]){
		case 'A':c[0]++;break;
		case 'B':c[1]++;break;
		case 'C':c[2]++;break;
		case 'D':c[3]++;break;
		case 'E':c[4]++;break;
		case 'F':c[5]++;break;
		case 'G':c[6]++;break;
		case 'H':c[7]++;break;
		case 'I':c[8]++;break;
		case 'J':c[9]++;break;
		case 'K':c[10]++;break;
		case 'L':c[11]++;break;
		case 'M':c[12]++;break;
		case 'N':c[13]++;break;
		case 'O':c[14]++;break;
		case 'P':c[15]++;break;
		case 'Q':c[16]++;break;
		case 'R':c[17]++;break;
		case 'S':c[18]++;break;
		case 'T':c[19]++;break;
		case 'U':c[20]++;break;
		case 'V':c[21]++;break;
		case 'W':c[22]++;break;
		case 'X':c[23]++;break;
		case 'Y':c[24]++;break;
		case 'Z':c[25]++;break;
		}}
	}
	int j,max=0;
	for(i=0;i<26;i++)
	{
		if(c[i]>max)
		{	max=c[i];
		j=i;}
	}
	int t=0;
	switch(j){
	case 0:my_printf("A\n%d\n",max);
		for(i=0;i<n;i++)
		   {
			   for(k=0;b[i].s[k];k++)
			   {
				   if(b[i].s[k]=='A')
				   my_printf("%d\n",b[i].n);
			   }
			   
		   }
		break;
	case 1:my_printf("B\n%d\n",max);
		for(i=0;i<n;i++)
		{
			for(k=0;b[i].s[k];k++)
				if(b[i].s[k]=='B')
					my_printf("%d\n",b[i].n);
		}
		break;
	case 2:my_printf("C\n%d\n",max);for(i=0;i<n;i++){for(k=0;b[i].s[k];k++)if(b[i].s[k]=='C')my_printf("%d\n",b[i].n);}break;
	case 3:my_printf("D\n%d\n",max);for(i=0;i<n;i++){for(k=0;b[i].s[k];k++)if(b[i].s[k]=='D')my_printf("%d\n",b[i].n);}break;
	case 4:my_printf("E\n%d\n",max);for(i=0;i<n;i++){for(k=0;b[i].s[k];k++)if(b[i].s[k]=='E')my_printf("%d\n",b[i].n);}break;
	case 5:my_printf("F\n%d\n",max);for(i=0;i<n;i++){for(k=0;b[i].s[k];k++)if(b[i].s[k]=='F')my_printf("%d\n",b[i].n);}break;
	case 6:my_printf("G\n%d\n",max);for(i=0;i<n;i++){for(k=0;b[i].s[k];k++)if(b[i].s[k]=='G')my_printf("%d\n",b[i].n);}break;
	case 7:my_printf("H\n%d\n",max);for(i=0;i<n;i++){for(k=0;b[i].s[k];k++)if(b[i].s[k]=='H')my_printf("%d\n",b[i].n);}break;
	case 8:my_printf("I\n%d\n",max);for(i=0;i<n;i++){for(k=0;b[i].s[k];k++)if(b[i].s[k]=='I')my_printf("%d\n",b[i].n);}break;
	case 9:my_printf("J\n%d\n",max);for(i=0;i<n;i++){for(k=0;b[i].s[k];k++)if(b[i].s[k]=='J')my_printf("%d\n",b[i].n);}break;
	case 10:my_printf("K\n%d\n",max);for(i=0;i<n;i++){for(k=0;b[i].s[k];k++)if(b[i].s[k]=='K')my_printf("%d\n",b[i].n);}break;
	case 11:my_printf("L\n%d\n",max);for(i=0;i<n;i++){for(k=0;b[i].s[k];k++)if(b[i].s[k]=='L')my_printf("%d\n",b[i].n);}break;
	case 12:my_printf("M\n%d\n",max);for(i=0;i<n;i++){for(k=0;b[i].s[k];k++)if(b[i].s[k]=='M')my_printf("%d\n",b[i].n);}break;
	case 13:my_printf("N\n%d\n",max);for(i=0;i<n;i++){for(k=0;b[i].s[k];k++)if(b[i].s[k]=='M')my_printf("%d\n",b[i].n);}break;
	case 14:my_printf("O\n%d\n",max);for(i=0;i<n;i++){for(k=0;b[i].s[k];k++)if(b[i].s[k]=='O')my_printf("%d\n",b[i].n);}break;
	case 15:my_printf("P\n%d\n",max);for(i=0;i<n;i++){for(k=0;b[i].s[k];k++)if(b[i].s[k]=='P')my_printf("%d\n",b[i].n);}break;
	case 16:my_printf("Q\n%d\n",max);for(i=0;i<n;i++){for(k=0;b[i].s[k];k++)if(b[i].s[k]=='Q')my_printf("%d\n",b[i].n);}break;
	case 17:my_printf("R\n%d\n",max);for(i=0;i<n;i++){for(k=0;b[i].s[k];k++)if(b[i].s[k]=='R')my_printf("%d\n",b[i].n);}break;
	case 18:my_printf("S\n%d\n",max);for(i=0;i<n;i++){for(k=0;b[i].s[k];k++)if(b[i].s[k]=='S')my_printf("%d\n",b[i].n);}break;
	case 19:my_printf("T\n%d\n",max);for(i=0;i<n;i++){for(k=0;b[i].s[k];k++)if(b[i].s[k]=='T')my_printf("%d\n",b[i].n);}break;
	case 20:my_printf("U\n%d\n",max);for(i=0;i<n;i++){for(k=0;b[i].s[k];k++)if(b[i].s[k]=='U')my_printf("%d\n",b[i].n);}break;
	case 21:my_printf("V\n%d\n",max);for(i=0;i<n;i++){for(k=0;b[i].s[k];k++)if(b[i].s[k]=='V')my_printf("%d\n",b[i].n);}break;
	case 22:my_printf("W\n%d\n",max);for(i=0;i<n;i++){for(k=0;b[i].s[k];k++)if(b[i].s[k]=='W')my_printf("%d\n",b[i].n);}break;
	case 23:my_printf("X\n%d\n",max);for(i=0;i<n;i++){for(k=0;b[i].s[k];k++)if(b[i].s[k]=='X')my_printf("%d\n",b[i].n);}break;
	case 24:my_printf("Y\n%d\n",max);for(i=0;i<n;i++){for(k=0;b[i].s[k];k++)if(b[i].s[k]=='Y')my_printf("%d\n",b[i].n);}break;
	case 25:my_printf("Z\n%d\n",max);for(i=0;i<n;i++){for(k=0;b[i].s[k];k++)if(b[i].s[k]=='Z')my_printf("%d\n",b[i].n);}break;
	
	}
	return 0;
}

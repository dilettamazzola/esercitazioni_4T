/* 
1) funzione che dato un nuemro N restituisca la somma di tutti i numeri primi N numeri maturali
		5--> 5+(4+3+2+1)
		4--> 4+(3+2+1)
		...
*/

/* 
2) fare la funzione del punto 1 in maniera ricorsiva
		caso base =0
*/ 
#include<stdio.h>

int somma(int n);
int sommaRic(int n); 
int fattoriale(int n);

int main()
{
	int n;
	int r;
	int m;
	int s;
	scanf("%d",&n);
	fflush(stdin);
	r=somma(n);
	printf("somma %d\n",r);	
	m=sommaRic(n);
	printf("somma ricorsiva %d\n",m);	
	s=fattoriale(n);
	printf("fattoriale %d\n",s);	
	return 0;
}

//1
int somma(int n)
{
	int s=0;
	int i;
	for(i=0;i<=n;i++)
		{
			s+=i;
		}
	return s;
	
	/*
	int s=n;
	while(--n>0)
		s+=n;
	return s;
	*/
}

//2
int sommaRic(int n)
{
	if(n==0)
		return 0;
	else
		return n+sommaRic(n-1);
}

/*
	int a=sommaRic(3);		3+2+1-->6
	1) 3+sommaRic(2) 		3+(2+1)=6
	2) 2+sommaRic(1)		2+(1+0)=3
	3) 1+sommaRic(0)		1+(0)=1
	4) 0
*/

//3
int fattoriale(int n)
{
	if(n==1)
		return 0;
	else
		return n*fattoriale(n-1);
}
	
	
	
	
	
	
	


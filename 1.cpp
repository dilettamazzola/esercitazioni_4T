/*
prod
funzione che ritorni il prodotto tra
2 numeri

prodArray
funzione che fa il prodotto dei unmeri di un array
*/

#include <stdio.h>

int prod(int a, int b);
int prodArray(int arr[], int dim);

int main()
{
	int n;
	
	scanf("%d",&n);
	fflush(stdin);
	
	printf("prod: %d\n",prod(n,2));
	
	int arr[5]={2,3,4,5,1};
	
	printf("prodArray: %d\n",prodArray(arr, 5));
	
	return 0;
}

int prod(int a, int b){
	return a*b;
}

int prodArray(int arr[], int dim){
	int r=1;
	int i;
	for(i=0;i<dim;i++)
		r*=arr[i];//r=r*arr[i]
	//2,3,4,5,1
	/*
		i=0 -> r=1*2
		i=1 -> r=2*3
		i=2 -> r=6*4
		...
	*/
	return r;
}

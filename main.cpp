#include <stdio.h>
#include "sort.h"
#define N 1000

int s[N]; 
int main(void)
{
	int i,j,n,order,maxn=-99999999;
	printf("Please input the number of data\n");
	scanf("%d",&n);
	if (n<=0) {printf("error:input invalid");return 1;}
	printf("Please input the data\n");
	for (i=0;i<n;i++)
		{
			scanf("%d",&s[i]);
			if (s[i]>maxn) maxn=s[i];
		}
	printf("Finish. Which algorithm do you want to use?\n");
	printf("1:InsertionSort\n2:ShellSort\n3:CountingSort\n");
	printf("4:SelectionSort\n5:BubbleSort\n6:QuickSort\n");
	printf("7:MergeSort\n");
	scanf("%d",&order);	

	switch (order)
	{
		case 1:InsertionSort(n,s);break;
		case 2:ShellSort(n,s);break;
		case 3:CountingSort(n,maxn+1,s);break;
		case 4:SelectionSort(n,s);break;
		case 5:BubbleSort(n,s);break;
		case 6:QuickSort(s,0,n-1);break;
		case 7:MergeSort(s,0,n-1);break;
	}
	

	for (i=0;i<n;i++)
		printf("%d ",s[i]);	
}
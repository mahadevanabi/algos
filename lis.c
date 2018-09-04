#include<stdio.h>
#include<stdlib.h>
int lis(int a[], int n){
	int *lis,i,j,max=0;
	lis=(int*)malloc(sizeof(int)*n);
	for(i=0;i<n;i++)
		lis[i]=1;
	for(i=1;i<n;i++){
		for(j=0;j<i;j++)
			if(a[i]>a[j]&&lis[i]<lis[j]+1)
				lis[i]=lis[j]+1;
	
		max=max<lis[i]? lis[i]: max;
	}


return max;
}
int main(){
	int arr[] ={10,22,9,33,21,50,40,60};
	int n= sizeof(arr)/sizeof(arr[0]);
	printf("Length of Longest  Increasing Subsequence is %d \n",lis(arr,n));

	return 0;
}


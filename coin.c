#include<stdio.h>
int count(int a[],int m,int n){
	int t[n+1][m],i,j,x,y;
	for(i=0;i<m;i++)
		t[0][i]=1;
	for(i=1;i<n+1;i++)
		for(j=0;j<m;j++){
			x=(i-a[j]>=0)?t[i-a[j]][j]:0;
			y=(j>=1)?t[i][j-1]:0;
			t[i][j]=x+y;
		
		}
	
	return t[n][m-1];


}
int main(){
	int a[]={1,2,3};
	int m=sizeof(a)/sizeof(a[0]);
	printf("%d",count(a,m,4));
	return 0;
}

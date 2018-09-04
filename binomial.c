#include<stdio.h>
#include<string.h>
int c[1000][1000]={0};
int min(int a,int b){
	return a<b?a:b;
}
int binomial(int n,int k){
	
	
	static int count=0;
	count++;
	printf("%d----\n",count);
	if(k==0||k==n){
		
		return c[n][k]=1;
		}
	else if(c[n][k]!=0){
		
		return c[n][k];
		}
	c[n][k]=binomial(n-1,k-1)+binomial(n-1,k);
		
	return c[n][k];
}

int main(){
	
	int n,k;
	scanf("%d %d",&n,&k);
	printf("%d\n",binomial(n,k));
		return 0;
	
}
//392345328 out for 99&54;


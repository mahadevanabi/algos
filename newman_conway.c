#include<stdio.h>
int new(int n){
	int p[n+1],i;
	p[0]=0;
	p[1]=1;
	p[2]=1;
	for(i=3;i<=n;i++)
		p[i]=p[p[i-1]]+p[i-p[i-1]];
	return p[n];
}


int main(){
	int n;
	scanf("%d",&n);
	printf("%d",new(n));

	return 0;
}

#include<stdio.h>
int bino(int x,int n,int k){
	int sum=0,val=1;
	int i;
	for(i=1;i<=n&&sum<k;i++){
		val=val*(x-i+1);		//1*14;14*13;
		val=val/i;				//14/1;14*13/(1*2);
		sum=sum+val;
	
	}
	return sum;

}

int egg(int n, int k){
	int low=1,high=k;
	while(low<high){
		int mid=(low+high)/2;
		if(bino(mid,n,k)<k)
			low=mid+1;
		else
			high=mid;
	}
	return low;
}
int main(){
 int n,k;
 scanf("%d %d",&n,&k);
 printf("%d\n",egg(n,k));



return 0;
}

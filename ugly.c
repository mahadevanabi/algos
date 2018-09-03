#include<stdio.h>
int min(int a,int b){
	if(a<b)
		return a;
	return b;


}
int ugly(int n){
	int ugly[n];
	int i2=0,i5=0,i3=0,i;
	int n2=2;
	int n3=3;
	int n5=5;
	int nu=1;
	ugly[0]=1;
	for(i=1;i<n;i++){
	nu=min(n2,min(n3,n5));
	ugly[i]=nu;
	if(nu==n2){
		i2++;
		n2=ugly[i2]*2;
	}
	if(nu==n3){
		i3++;
		n3=ugly[i3]*3;
	}
	if(nu==n5){
		i5++;
		n5=ugly[i5]*5;
	}
	
	
	
	
	
	
	}
	return nu;
	







}
int main(){
	int n;
	scanf("%d",&n);
	printf("%d",ugly(n));
	
	return 0;
}

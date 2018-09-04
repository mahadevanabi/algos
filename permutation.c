#include<stdio.h>
int main(){
	int i,n,k,fn,fk;
	fn=1;
	
	scanf("%d%d",&n,&k);
	for(i=1;i<=n;i++){
	fn=fn*i;
	if(i==n-k)
		fk=fn;
	
	
	}
	printf("%d\n",fn/fk);

return 0;
}

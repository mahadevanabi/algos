#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>
#include<math.h>
int main(){

   int n,i,j;
    scanf("%d",&n);
    bool *a;
    a=(bool*)(malloc(sizeof(bool)*n));
    for(i=0;i<=n;i++)
        a[i]=true;
    
    
    for(i=2;i<=sqrt(n);i++){
        if(a[i]==true){
            
            for(j=i*i;j<=n;j=j+i){
                a[j]=false;
            }
            
        }
        
    }
    for(i=2;i<=n;i++){
        if(a[i]==true)
            printf("%d ",i);
    }
    
    return 0;
}
#include<stdio.h>
#include<string.h>
int l[100][100]={0};
int max(int a,int b){
	return (a>b)? a: b;
}

int lcs(char *x,char *y,int nx,int ny){
	if(nx==0||ny==0)
		return 1;
	 if(l[nx][ny]!=0)
		return l[nx][ny];
	 if(x[nx-1]==y[ny-1])
		 l[nx][ny]=1+lcs(x,y,nx-1,ny-1);
		 
	
	else
		l[nx][ny]= max(lcs(x,y,nx-1,ny),lcs(x,y,nx,ny-1));

	return l[nx][ny];

}

int main(){
	char x[100],y[100];//dont use *x it cause problem no guarantee it will end with \0
	int nx,ny;
	scanf("%s",x);
	scanf("%s",y);
	nx=strlen(x);
	ny=strlen(y);
	printf("Length of Longest Common Subsequence %d\n",lcs(x,y,nx,ny));
	for(int i=0;i<nx;i++){
		for(int j=0;j<ny;j++)
			printf("%d ",l[i][j]);
		printf("\n");
	
	}

return 0;
}

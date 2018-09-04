#include<stdio.h>
unsigned long int c[100]={0};
// A recursive function to find nth catalan number
unsigned long int catalan(unsigned int n)
{
   //static int count=0;
	// Base case
	c[0]=1;
	c[1]=1;
//	cout<<count++<<"\n";
	if (c[n]!=0){ return c[n];
    }
	// catalan(n) is sum of catalan(i)*catalan(n-i-1)
	unsigned long int res = 0;
	for (int i=0; i<n; i++)
		res += catalan(i)*catalan(n-i-1);
    c[n]=res;
	return res;
}

// Driver program to test above function
int main()
{
	for (int i=0; i<10; i++)
		printf("%ld ",catalan(i));
	return 0;
}


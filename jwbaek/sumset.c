#include <stdio.h>

int main(void) {
	// your code goes here
	int n;
	scanf("%d",&n);
	int dp[1000001];
	dp[1]=2;
	dp[2]=2;
	int i=3;
	for(;i<=n;i++)
	{
		dp[i]=dp[i-1]%1000000000;
		if(i%2==0){
			dp[i]+=dp[i/2]%1000000000;
		}
		
	}
	printf("%d\n",dp[n]);
	return 0;
}

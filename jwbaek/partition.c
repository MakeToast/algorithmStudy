#include <stdio.h>
int main() {
    // your code goes here
    int i,j,k;
    int dp[51][51];
    int n;
    scanf("%d",&n);

    for(i=1;i<=n;i++)
	for(j=1;j<=n;j++)
	   dp[i][j]=0;
	       dp[1][1]=1;
    dp[1][1]=1;
    dp[2][1]=1;
    dp[2][2]=1;
    for(i=3;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            if(i==j) dp[i][j]=1;
            else{
            for(k=j;k<i;k++)
            {
                dp[i][j]+=dp[i-j][k];
            }
            }
        }
    }
    int result=0;
    for(i=1;i<=n;i++)
    {
        result+=dp[n][i];
    }
    printf("%d",result);
    return 0;
}

//#include<stdio.h>
//#include<memory>
//
//int c[51][51];
//int dp[102][51][51];
//
//#define max(a,b) (a>b?a:b);
//
//int main()
//{
//	int N;
//	scanf("%d",&N);
//	while(N--){
//		int m,n;
//		scanf("%d%d",&m,&n);
//		memset(c,0,sizeof(c));
//		for(int i=1;i<=m;i++){
//			for(int j=1;j<=n;j++){
//				scanf("%d",&c[i][j]);
//			}
//		}
//		int t;
//		int i=0;
//		int j=0;
//		for(int k=1;k<=m+n-1;k++){
//			int t = i>m?m:i;
//			int s = j>n?n:j;
//			for( i=i-t+1;i<=t;i++){
//				for( j=j-s+1;j<=s;j++){
//					if(i!=j|| k!=m+n-1)
//					{
//						int a = max(dp[k-1][i-1][j],dp[k-1][i][j-1]);
//						int b = max(dp[k-1][i-1][j-1],dp[k-1][i][j]);
//						dp[k][i][j] = max(a,b)+c[i][k-i]+c[k-j][j];
//					}
//				}
//			}
//		}
//		printf("%d\n",dp[m+n-1][m][n]);
//	}
//		
//
//}
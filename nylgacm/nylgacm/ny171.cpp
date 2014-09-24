//#include<cstdio>
//using namespace std;
//
//int dp[21][21];
//
//int main()
//{
//	int a,b;
//	scanf("%d%d",&a,&b);
//	for(int i=1;i<=a;i++){
//		for(int j =1;j<=b;j++){
//			int temp;
//			scanf("%d",&temp);
//			int c = dp[i][j-1];
//			int d = dp[i-1][j];
//			if(c>d)
//				dp[i][j] = temp+c;
//			else
//				dp[i][j] = temp +d;
//		}
//	}
//	printf("%d\n",dp[a][b]);
//
//
//
//
//}
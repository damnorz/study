//#include<cstdio>
//#include<algorithm>
//using namespace std;
//
//
//#define N 101
//int a[N][N];
//int sum[N];
//int dp[N];
//
//int main()
//{
//
//	int num;
//	scanf("%d",&num);
//	int b,c;
//	while(num--){
//		scanf("%d%d",&b,&c);
//		for(int i =1;i<=b;i++){
//			for(int j=0;j<c;j++){
//				scanf("%d",&a[i][j]);
//				a[i][j] = a[i][j]+a[i-1][j];
//			}
//		}
//		int re ;
//		re = a[1][0];
//		for(int i =0;i<=b;i++){
//			for(int j =b;j>i;--j){
//				for(int k =0;k!=c;k++){
//					sum[k] = a[j][k]-a[i][k];
//				}
//				int x=0;
//				int max = sum[0];
//				dp[0]=sum[0];
//				for(int i=1;i<c;i++){
//					if((dp[i-1]+sum[i])>sum[i])
//						dp[i] =dp[i-1]+sum[i];
//					else
//						dp[i] = sum[i];
//				}
//			
//				for(int i=0;i<c;i++){
//					if(max<dp[i])
//						max = dp[i];
//				}
//				 if(max>re){
//					 re = max;
//				 }
//
//			}
//		}
//		printf("%d\n",re);
//		
//
//
//
//
//	}
//
//
//}
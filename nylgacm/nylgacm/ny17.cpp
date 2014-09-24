//#include<iostream>
//#include<stdio.h>
//#include<string>
//using namespace std;
//
//#define max(a,b) ((a>b)?a:b)
//#define REP(n,m) (for( i=n;i<m;i++))
//
//int main()
//{
//	int n;
//	cin>>n;
//	while(n--){
//		string s;
//		cin>>s;
//		int *dp = new int [s.length()+1];
//		dp[0] = 1;
//		int len = s.length();
//		for(int i =1;i<len;i++){
//			dp[i]=1;
//			for(int j = i-1;j>=0;j--){
//				if(s[i]>s[j])
//					dp[i] = max(dp[i],dp[j]+1);
//			}
//		}
//		int mn =1;
//
//
//		for(int i =2;i<len;i++)
//			mn = max(mn,dp[i]);
//
//		cout<<mn<<endl;
//	}
//
//
//}


//假设我们的初始的序列S1。那我们从小到大先排序一下。得到了S1'。这样我们再球 S1和S1'的最长公共子序列就可以知道答案了：）是不是有点巧妙啊
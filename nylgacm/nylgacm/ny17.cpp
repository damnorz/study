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


//�������ǵĳ�ʼ������S1�������Ǵ�С����������һ�¡��õ���S1'�������������� S1��S1'������������оͿ���֪�����ˣ����ǲ����е����
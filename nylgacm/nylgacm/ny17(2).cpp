//#include<iostream>
//#include<stdio.h>
//#include<string>
//using namespace std;
//
//
//int main()
//{
//	int n;
//	cin>>n;
//			
//	while(n--){
//		string s;
//		cin>>s;
//		int *dp = new int [s.length()+1];
//		dp[1] = s[0];
//		int len= 1;
//		int slen = s.length();
//		for(int i =1;i<slen;i++){
//			if(s[i]>dp[len]){
//				len++;
//				dp[len] = s[i];
//			}else{
//				int pos=-1;
//				int left =1;
//				int right = len;
//				
//				while(left<=right){
//					int mid = (right+left)>>1;
//					if(dp[mid]<s[i]){
//						left = mid+1;
//					}else{
//						right = mid-1;
//					}
//				}
//				pos = left;
//				dp[pos] = s[i];
//			}
//		}
//		cout<<len<<endl;
//	}
//
//
//}
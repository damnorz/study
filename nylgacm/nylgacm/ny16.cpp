//#include<iostream>
//#include<stdio.h>
//#include<string>
//#include<algorithm>
//using namespace std;
//
//struct aa{
//	int a,b;
//}s[1024];
//
//int cmp(aa x,aa y){
//	if(x.a==y.a)
//		return x.b>y.b;//保证最后更新的y一定是最小的   卡在这里
//	return x.a<y.a;
//}
//
//
//
//int main()
//{
//	int n;
//	cin>>n;
//	while(n--){
//		int num;
//		cin>> num;
//		for(int i =0;i<num;i++){
//			int a,b;
//			cin>>a>>b;
//			if(a>b){
//				int temp = b;
//				b=a;
//				a=temp;
//			}
//			s[i].a=a;
//			s[i].b=b;
//		}
//		sort(s,s+num,cmp);
//		int *dp = new int [num+1];
//		dp[1] = s[0].b;
//		int len =1;
//		for(int i =1;i<num;i++){
//			if(s[i].b>dp[len]){
//				len++;
//				dp[len]=s[i].b;
//			}
//			else{
//				int left =1;
//				int right = len;
//				
//				while(left<=right){
//					int mid = (right+left)>>1;
//					if(dp[mid]<s[i].b){
//						left = mid+1;
//					}else{
//						right = mid-1;
//					}
//				}
//				dp[left] = s[i].b;
//			}
//		}
//		cout<<len<<endl;
//
//	}
//
//
//
//
//}
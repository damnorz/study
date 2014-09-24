//#include<cstdio>
//using namespace std;
//
//int a[1000005],x,len;  
//
//
//int main()
//{
//	int n;
//	int cas = 1,ans,j; 
//
//	while(~scanf("%d",&n)){
//		ans = 0;  
//
//        for(int i = 0; i<n; i++)  
//            scanf("%d",&a[i]);  
//		for(int i =0;i<n;i++){
//			if(a[i]==0)
//				ans++;
//			else {
//				for(int j=i+1;j<n;j++){
//					if(a[j] == a[i]){
//						ans++;
//						break;
//					}
//					else if(a[i]>a[j])
//						break;
//				}
//			}
//		}
//		printf("Case %d: %d\n",cas,n-ans);
//		cas++;
//
//
//
//
//	}
//
//
//
//}
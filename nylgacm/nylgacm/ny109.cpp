//#include<iostream>
//#include<algorithm>
//#include<memory.h>
//using namespace std;
//
//int a[10003],b[10003];
//
//int main()
//{
//	int n ;
//	int m;
//	cin>>n;
//	while(n--){
//		memset(a,0,sizeof(a));
//		memset(b,0,sizeof(b));
//		cin>>m;
//		for(int i =1;i<=m;i++){
//			cin>>a[i];
//			a[i]+=a[i-1];
//		}
//		for(int i =1;i<=m;i++){
//			cin>>b[i];
//			b[i]+=b[i-1];
//		}
//		sort(a+1,a+m);
//		sort(b+1,b+m);
//		if(equal(a+1,a+m,b+1))
//			cout<<"Yes"<<endl;
//		else
//			cout<<"No"<<endl;
//	}
//}


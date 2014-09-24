//#include<iostream>
//#include<stdio.h>
//#include<cstdlib>
//using namespace std;
//
//int c[30005];
//
//int main()
//{
//	int n;
//	cin>>n;
//	while(n--){
//		int N,m;
//		cin>>N>>m;
//		for(int i=1;i<=m;i++){
//			int w,v;
//			cin>>w>>v;
//			for(int j=N;j>=w;--j){
//				c[j] = max(c[j-w]+w*v,c[j]);
//			}
//
//
//		}
//		cout<<c[N]<<endl;
//
//	}
//
//
//
//}


//#include<iostream>
//#include<stdio.h>
//#include<cstdlib>
//using namespace std;
//
//int c[26][30005];
//
//int main()
//{
//	int n;
//	cin>>n;
//	while(n--){
//		int N,m;
//		cin>>N>>m;
//		int w[26];
//		int v[26];
//		for(int i=1;i<=m;i++)
//			cin>>v[i]>>w[i];
//		for(int i=0;i<=N;i++)
//			c[0][i]=0;
//		for(int i=0;i<=m;i++)
//			c[i][0] = 0;
//		for(int j=1;j<=m;j++)
//			for(int i =1;i<=N;i++){
//				if(i<v[j])
//					c[j][i] = c[j-1][i];
//				else
//					c[j][i] = max(c[j-1][i],c[j-1][i-v[j]] + v[j]*w[j]);
//			}
//
//		cout<<c[m][N]<<endl;
//
//	}
//
//
//
//}
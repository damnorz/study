//#include <iostream>
//#include<stdio.h>
//using namespace std;
//
//int a[10];
//bool num[10];
//int N,m;
//
//
//void dfs(int i)
//{
//	if(i==m){
//		for(int j =0;j<m;j++)
//			printf("%d",a[j]);
//		cout<<endl;
//	}else{
//		for(int j=1;j<=N;j++){
//			if(!num[j]){
//				num[j] = true;
//				a[i] = j;
//				dfs(i+1);
//				num[j] =false;
//			}
//		}
//	}
//
//
//}
//
//
//int main()
//{
//	int n;
//	cin>>n;
//	while(n--){
//		for(int i=0;i<10;i++)
//			num[i]=false;
//		cin>>N>>m;
//		dfs(0);
//	}
//
//
//
//}
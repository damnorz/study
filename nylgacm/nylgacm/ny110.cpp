//#include<cstring>
//#include<cstdio>
//#include<iostream>
//#include<memory.h>
//using namespace std;
//
//const int N =505;
//int fight[N][N];
//bool meet[N][N];
////��̬ת�Ʒ��̣�meet[i][j]=meet[i][k]&&meet[k][j]&&i��սʤk����j��սʤk  
////                  ����meet[i][j]��ʾ���i��jսʿ������  
//
//void init(int n){
//	memset(fight,0,sizeof(fight));
//	for(int i=0;i!=n;i++){
//		for(int j =0 ;j!=n;j++){
//			scanf("%d",&fight[i][j]);
//		}
//	}
//	memset(meet,false,sizeof(meet));
//	for(int i =0;i<n;i++)
//		meet[i][(i+1)%n] = true;
//}
//
//void solve(int n){
//	int end;
//	for(int i =2;i<=n;i++){
//		for(int start =0;start!=n;start++){
//			end = (i+start)%n;
//			if(meet[start][end])continue;
//			for(int k = (start+1)%n;k!=end;k++,k%=n){
//				if(meet[start][k] && meet[k][end] &&(fight[start][k] ||fight[end][k])){
//					meet[start][end] = true;
//					break;
//				}
//			}
//		}
//	}
//
//
//}
//
//int count(int n){
//	int res =0;
//	for(int i=0;i!=n;i++){
//		if(meet[i][i])
//			res++;
//	}
//	return res;
//}
//
//
//int main()
//{
//	int n;
//	cin>>n;
//	while(n--){
//		int size;
//		cin>>size;
//		init(size);
//		solve(size);
//		cout<<count(size)<<endl;
//
//
//	}
//
//
//
//
//}
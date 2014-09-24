//#include<iostream>
//#include<stdio.h>
//using namespace std;
//
//int a[101][101];
//
//void dfs(int x,int y,int n,int m)
//{
//	if(x>=0 && x<n && y>=0 && y<m &&(a[x][y] ==1 ))
//	{
//		a[x][y] = 0;
//		dfs(x-1,y,n,m);
//		dfs(x+1,y,n,m);
//		dfs(x,y+1,n,m);
//		dfs(x,y-1,n,m);
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
//		int x,y;
//		cin>>x>>y;
//		for(int i=0;i<x;i++)
//			for(int j=0;j<y;j++){
//				scanf("%d",&a[i][j]);
//			}
//			int count=0;
//		for(int i=0;i<x;i++){
//			for(int j=0;j<y;j++){
//				if(a[i][j]==1){
//					dfs(i,j,x,y);
//					count++;
//				}
//			}
//		}
//		cout<<count<<endl;
//	}
//
//
//}
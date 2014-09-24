//#include<iostream>
//#include<stdio.h>
//#include<memory.h>
//using namespace std;
//
//
//#define N 1010
//
//int g[N][N];
//int degree[N];
//int visited[N];
//
//
//void dfs(int i,int n)
//{
//	visited[i] = 1;
//	for(int j=1;j<=n;j++){
//		if(!visited[j] && g[i][j]){
//			dfs(j,n);
//		}
//	}
//}
//
//
//
//int main()
//{
//	int num;
//	cin>>num;
//	while(num--){
//		int n ,p;
//		cin>>n>>p;
//		memset(g,0,sizeof(g));
//		memset(degree,0,sizeof(degree));
//		memset(visited,0,sizeof(visited));
//		while(p--){
//			int a,b;
//			cin>>a>>b;
//			g[a][b] = 1;
//			g[b][a] = 1;
//			degree[a]++;
//			degree[b]++;
//		}
//		dfs(1,n);
//		int count = 0;
//		bool flag =true;
//		for(int i =1;i<=n;i++){
//			if(visited[i]!=1)
//				flag = false;
//			if(degree[i]%2)
//				count++;
//		}
//		if(flag){
//			if(count==0 || count ==2)
//				cout<<"Yes"<<endl;
//			else 
//				cout<<"No"<<endl;
//		}
//		else 
//			cout<<"No"<<endl;
//	}
//}
//		
//
//
//

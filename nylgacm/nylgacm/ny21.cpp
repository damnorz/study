//#include<iostream>
//#include<stdio.h>
//#include<queue>
//#include<string.h>
//using namespace std;
//
//
//struct node
//{
//	int v[3];
//	int step;
//	 node(){memset(v,0,sizeof(v));}  
//};
//
//node start;
//node ed;
//node cur,tp;
//
//bool vis[1000010];
//
//
//bool check(node a,node b){
//	for(int i =0;i<3;i++){
//		if(a.v[i]!=b.v[i])return false;
//	}
//	return true;
//}
//
//int visnumber(node a)  
//{  
//    int num=0;  
//    for(int i=0;i<3;i++)  
//      num=num*100+a.v[i];  
//    return num;  
//}  
//
//void bfs()
//{
//	cur = start;
//	cur.v[1] = 0;
//	cur.v[2]=0;
//	queue<node>q;
//	q.push(cur);
//	int mm = visnumber(cur);
//	vis[mm] = true;
//
//	while(!q.empty()){
//		cur=q.front();
//		q.pop();
//		if(check(cur,ed))
//			{printf("%d\n",cur.step);return;}  
//		for(int i =0;i<3;i++)
//			for(int j=0;j<3;j++){
//				if(i==j)continue;
//				int carry = start.v[j]-cur.v[j];
//				if(carry>cur.v[i])carry = cur.v[i];
//				tp = cur;
//				tp.v[i]-=carry;tp.v[j]+=carry;  
//				 mm=visnumber(tp);  
//              if(!vis[mm])  
//              {  
//                  tp.step++;  
//                  q.push(tp);  
//                  vis[mm]=true;  
//              }  
//			}
//	}
//
//
//	 printf("-1\n");  
//}
//
//int main()
//{
//	int n;
//	scanf("%d",&n);
//	while(n--){
//		for(int i=0;i<3;i++) scanf("%d",&start.v[i]);  
//        for(int i=0;i<3;i++) scanf("%d",&ed.v[i]);  
//		start.step = 0;
//		memset(vis,0,sizeof(vis));  
//		bfs();
//	}
//
//
//
//
//}
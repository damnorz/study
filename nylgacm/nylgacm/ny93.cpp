//#include<iostream>
//#include<stack>
//using namespace std;
//
//stack<int>a[4];
//
//int main()
//{
//	int n;
//		cin>>n;
//		while(n--){
//			int b,c;
//			cin>>b>>c;
//			for(int i=1;i<4;i++)
//				while(a[i].size()>0)a[i].pop();
//			for(int i=b;i>0;i--)
//				a[1].push(i);
//			bool flag = false;
//			while(c--){
//				int e,f;
//				cin>>e>>f;
//				int temp ;
//				if(a[e].size()==0)
//					flag =true;
//				else
//				{
//					temp = a[e].top();
//					a[e].pop();
//					if(a[f].size()>0){
//						if(a[f].top()<temp)
//							flag = true;
//					}
//					a[f].push(temp);
//				}
//
//			}
//			 if(flag) cout<<"illegal\n";
//				else cout<<"legal\n";
//		}
//}
//
//
//			
//
//

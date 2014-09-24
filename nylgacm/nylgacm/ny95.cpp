//#include<iostream>
//#include<stdio.h>
//using namespace std;
//
//
//int main()
//{
//	int n;
//	cin>>n;
//	while(n--){
//		int num;
//		cin>>num;
//		int * a = new int [num];
//		for(int i=0;i<num;i++)
//			scanf("%d",&a[i]);
//		int maxcount=0;
//		int maxn;
//		for(int i=0;i<num;i++){
//			int count =0;
//			bool flag =false;
//			for(int j=0;j<i;j++){
//
//				if(a[i] == a[j]){
//					flag = true;
//					break;
//				}
//					
//			}
//			if(flag)
//				continue;
//			for(int j=i;j<num;j++){
//				if(a[i] == a[j])
//					count++;
//			}
//			
//			if(count>maxcount){
//				maxcount = count;
//				maxn = a[i];
//			}
//		}
//		printf("%d %d\n",maxn,maxcount);
//	}
//
//
//}


/////”¶∏√”√map

//
// 
// 
//#include<iostream>
//#include<cmath>
//#include<map>
//#include<algorithm>
//using namespace std;
//
//bool myless(const pair<int,int>& p1,const pair<int,int>& p2)
//{
//	return p1.second<p2.second;
//}
//int main()
//{
//	//freopen("in.txt","r",stdin);
//	int n;
//	cin>>n;
//	while(n--)
//	{
//		int w,a;
//		map<int,int> mp;
//		cin>>w;
//		while(w--)
//		{
//			cin>>a;
//			++mp[a];
//		}
//		map<int,int>::iterator it=max_element(mp.begin(),mp.end(),myless);
//		cout<<it->first<<" "<<it->second<<endl;
//	}
//}              
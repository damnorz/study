//#include<iostream>
//#include<stdio.h>
//#include<algorithm>
//using namespace std;
//
//struct thing
//{
//	int weight;
//	int value;
//}t [15];
//
//
//bool cmp(thing a,thing b)
//{
//	return a.value>b.value;
//}
//
//
//int main()
//{
//	//thing t [15];
//	int n;
//	cin>>n;
//	while(n--){
//		int s,m=0;
//		scanf("%d%d",&s,&m);
//		for(int i=0;i<s;i++)
//			scanf("%d%d",&t[i].value,&t[i].weight);
//		int value=0;
//		int weight=0;
//		sort(t,t+s,cmp);
//		for(int i =0;i<s;i++){
//			if(weight+t[i].weight<=m){
//				weight+=t[i].weight;
//				value+=t[i].value * t[i].weight;
//			}else
//			{
//				value+=t[i].value*(m-weight);
//				break;
//			}
//		}
//		cout<<value<<endl;
//	}
//
//
//
//
//
//}
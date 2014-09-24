//#include<iostream>
//#include<stdio.h>
//using namespace std;
//
//int main()
//{
//	while(true){
//		int n;
//		cin>>n;
//		if(n==0)
//			break;
//		int *a = new int[n];
//		for(int i=0;i<n;i++)
//			cin>>a[i];
//		for(int i=0;i<n-1;i++)
//			a[i] = a[i+1]-a[i];
//		int inc =0;
//		int des =0;
//		int count =0;
//		int flag =0;
//		for(int i=0;i<n-1;i++){
//			if((a[i]==0) &&(flag ==0)){
//				inc =0;
//				des=0;
//				continue;
//			}
//			if((a[i]==0) &&(flag ==1)){
//				int temp = 2*min(inc,des)+1;
//				count = max(count,temp);
//				inc =0;
//				des=0;
//				continue;
//			}
//			if(a[i]>0){
//				inc++;
//				flag =0;
//			}
//			if(a[i]<0){
//				des++;
//				flag =1;
//				if(a[i+1]>0){
//					int temp = 2*min(inc,des)+1;
//					count = max(count,temp);
//									inc =0;
//					des=0;
//				}
//			}
//		}
//		cout<<count<<endl;
//
//	}
//
//
//
//
//
//}
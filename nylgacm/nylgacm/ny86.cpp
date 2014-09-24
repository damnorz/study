//#include<stdio.h>
//#include<iostream>
//using namespace std;
//
//int ball[1000001];
//
//void Qsort(int a[],int low,int high)
//{
//if(low>=high)
//{
//return;
//}
//int first=low;
//int last=high;
//int key=a[first];//用字表的第一个记录作为枢轴
//while(first<last)
//{
//while(first<last&&a[last]>=key)--last;
//a[first]=a[last];//将比第一个小的移到低端
//while(first<last&&a[first]<=key)++first;
//a[last]=a[first];//将比第一个大的移到高端
//}
//a[first]=key;//枢轴记录到位
//Qsort(a,low,first-1);
//Qsort(a,last+1,high);
//}
//
//int binarySearch(int a[],int num,int x,int y)
//{
//	int low = x;
//	int high = y;
//	int mid;
//	while(low<=high){
//		mid = (low+high)/2;
//		if(a[mid] == num)
//			return mid;
//		else if(a[mid]<num){
//			low = mid+1;
//		}else
//			high = mid-1;
//	}
//	return -1;
//
//}
//
//int main()
//{
//	int m,n;
//	cin>>m>>n;
//	for(int i =0;i<m;i++)
//		cin>>ball[i];
//	Qsort(ball,0,m-1);
//	while(n--){
//		int x ;
//		cin>>x;
//		int s = binarySearch(ball,x,0,m-1);
//		if(s == -1)
//			cout<<"NO"<<endl;
//		else
//			cout<<"YES"<<endl;
//	}
//
//}
//
//
//
//
// 
//#include <stdio.h>
//#define MAXN 3125010 
//int vis[MAXN] = {0} ;
//int main()
//{
//	int m , n , x ; 
//	int i ;
//	scanf("%d%d", &m , &n ) ;
//	for( i = 0 ; i < m ; ++i )
//	{
//		scanf("%d", &x ) ;
//		vis[ x / 32 ] |= 1 << x % 32 ;
//	}
//	for( i = 0 ; i < n ; ++i )
//	{
//		scanf("%d", &x ) ;
//		if( vis[ x / 32 ] & ( 1 << x % 32 ) )
//			printf("YES\n");
//		else
//			printf("NO\n");
//	}
//	return 0 ;
//}        
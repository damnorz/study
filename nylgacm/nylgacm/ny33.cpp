//#include<iostream>
//#include<stdio.h>
//using namespace std;
//
//int a[101][101];
//int t=1;
//void fun(int up,int down,int left,int right)
//{
//	if(up>down){
//		if(a[up-1][up-1]==0)
//			a[up-1][up-1] = t++;
//
//			return;
//	}
//	for(int i=up;i<down;i++)
//		a[i][right]=t++;
//	for(int i =right;i>left;i--)
//		a[down][i]=t++;
//	for(int i =down;i>up;i--)
//		a[i][left]=t++;
//	for(int i =left;i<right;i++)
//		a[up][i]=t++;
//	fun(++up,--down,++left,--right);
//}
//
//
//
//int main()
//{
//	int n;
//	cin>>n;
//	int up = 0;
//	int down=n-1;
//	int left = 0;
//	int right = n-1;
//	fun( up, down, left, right);
// int i,j;
//for(i=0;i<n;i++)
//{
//for(j=0;j<n;j++)
//{
//printf("%5d",a[i][j]);
//}
//printf("\n");
//}
//
//
//
//
//
//}
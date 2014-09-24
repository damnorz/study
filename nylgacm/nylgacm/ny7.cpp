//#include<iostream>
//#include<stdio.h>
//#include<cstdlib>
//using namespace std;
//
//void bubbleSort(int a[],int num)
//{
//	for(int i =0;i<num;i++)
//	{
//		for(int j=1;j<num-i;j++){
//			if(a[j]>a[j+1]){
//				a[0] = a[j+1];
//				a[j+1]=a[j];
//				a[j]=a[0];
//			}
//		}
//
//
//	}
//
//}
//
//int main()
//{
//	int n;
//	cin>>n;
//	while(n--){
//		int num;
//		cin>>num;
//		int *a = new int [num+1];
//		int *b = new int [num+1];
//		for(int i = 1;i<=num;i++){
//			cin>>a[i]>>b[i];
//		}
//		bubbleSort(a,num);
//		bubbleSort(b,num);
//		int count =0 ;
//		int s;
//		if(num%2==0)
//			s = num/2;
//		else
//			s= num/2+1;
//		for(int i=1;i<=num;i++){
//			count +=abs(a[s]-a[i]);
//			count+=abs(b[s]-b[i]);
//		}
//		printf("%d\n",count);
//
//	}
//
//
//
//}
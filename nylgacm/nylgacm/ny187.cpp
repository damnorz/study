//#include<stdio.h>
//#include<math.h>
//#include<iostream>
//using namespace std;
//#define N 2000001
//bool prime[N];
//
//int main()
//{
//	int i ,j;
//	prime[2] = true;
//	for(int i =3;i<N;i++){
//		if(i%2==0)
//			prime[i] = false;
//		else
//			prime[i] = true;
//	}
//	for(int i =3;i<sqrt(double(N));i++){
//		if(prime[i]){
//			for(int j =i+i;j<=N;j+=i){
//				prime[j] = false;
//			}
//		}
//	}
//
//	int n ;
//	cin>>n;
//	while(n){
//		for(int i =2;i<=n;i++){
//			if(prime[i])
//				printf("%d ",i);
//		}
//		printf("\n");
//		cin>>n;
//	}
//
//}
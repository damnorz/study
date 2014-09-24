//#include<iostream>
//#include<stdio.h>
//#include<math.h>
//using namespace std;
//
//
//bool isprime(int n)
//{
//	for(int i =2;i<=(sqrt(1.0+n));i++){
//		if(n%i ==0)
//			return false;
//	}
//	return true;
//
//
//}
//
//int main()
//{
//	int n ;
//	cin>>n;
//	while(n--){
//		int num;
//		cin>>num;
//		if(num==1){
//			cout<<2<<" "<<1<<endl;
//			continue;
//		}
//		int k=0;
//		int re =0;
//		while(true){
//			if(isprime(num-k)){
//				re = num-k;
//			break;
//			}
//			if(isprime(num+k)){
//				re = num+k;
//				break;
//			}
//			k++;
//		}
//		int t =(num>re)?(num-re):(re-num);
//		cout<<re<<" "<<t<<endl;
//	}
//}
//		
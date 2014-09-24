//#include<stdio.h>
//#include<string.h>
//
// #define size 1000008
//
//int len;
//int c[size] ={0};
//
//int lowBit(int n)
//{
//	return n&(-n);
//
//}
//
//
//
//void modify(int n , int delta)
//{
//	while(n<=len){
//		c[n]+= delta;
//		n +=lowBit(n);
//	}
//}
//
//int sum(int n)
//{
//	int res = 0;
//	while(n>0){
//		res +=c[n];
//		n-=lowBit(n);
//	}
//	return res;
//
//}
//
//
//int main()
//{
//
//	int N,num;
//	int x;
//	scanf("%d%d",&N,&num);
//	len = N;
//	for(int i=1;i<N;i++){
//		scanf("%d",&x);
//		modify(i,x);
//	}
//
//	while(num--){
//		 int ch;
//		int m,n;
//		scanf("%d%d",&m,&n);
//		if(ch=='0'){
//			printf("%d\n",(sum(n)-sum(m-1)));
//		}
//		else{
//			modify(m,n);
//		}
//	}
//}
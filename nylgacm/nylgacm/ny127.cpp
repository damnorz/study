




//仍旧是一道快速取模的题目

//#include<stdio.h>
//#include<math.h>
//
//
//int modp(int a,int b,int c){
//	int ret = 1;
//	int tmp = a;
//	while(b){
//		if(b&0x1) ret=ret*tmp%c;     
//       tmp=tmp*tmp%c;     
//       b>>=1;     
//	}
//	return ret;
//
//}
//
//int main()
//{
//	int n ;
//	scanf("%d",&n);
//	while(n--)
//	{
//		int num;
//		scanf("%d",&num);
//		int re = modp(num,num-2,10003);
//		printf("%d\n",re);
//	}
//
//
//
//}
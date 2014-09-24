//#include<stdio.h>
//
//
//// 当0 < n < 5时，f(n!) = 0;
////当n >= 5时，f(n!) = k + f(k!), 其中 k = n / 5（取整）。
//
//int fun(int k)
//{
//	int sum=0;
//	while(k!=0)
//	{
//		sum=sum+k/5;
//		k=k/5;
//	}
//	return sum;
//}
//
//int main()
//{
//	int m;
//	scanf("%d",&m);
//	while(m--){
//		int n;
//		scanf("%d",&n);
//		n = fun(n);
//		printf("%d\n",n);
//	}
//}

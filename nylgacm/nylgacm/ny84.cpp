//#include<stdio.h>
//
//
//// ��0 < n < 5ʱ��f(n!) = 0;
////��n >= 5ʱ��f(n!) = k + f(k!), ���� k = n / 5��ȡ������
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

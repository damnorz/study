//#include<stdio.h>
//
//typedef long long ll;
//
//int  modpow(ll x,ll n,ll mod)
//{
//	ll re = 1;
//	while(n>0){
//		if(n &1 )
//			re = re *x%mod;
//		x = x *x % mod;
//		n=n/2;
//	}
//	return re;
//}
//
//
//int main()
//{
//	int n;
//	scanf("%d",&n);
//	while(n--){
//		int num;
//		scanf("%d",&num);
//		int res = modpow(2,num,1000000);
//		printf("%d\n",(res-1+1000000)%1000000);
//	}
//}
//
//

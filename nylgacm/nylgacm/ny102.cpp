//#include<stdio.h>
//
//typedef long long ll;
//
//ll powm(ll x , ll y,ll modn)
//{
//	ll res = 1;
//	while(y>0){
//		if(y&1)
//			res = res*x%modn;
//		x = x*x%modn;
//		y>>=1;
//	}
//	return res;
//
//}
//
//int main()
//{
//	int n ;
//	scanf("%d",&n);
//	while(n--)
//	{
//		int a,b,c;
//		scanf("%d%d%d",&a,&b,&c);
//		ll res = powm(a,b,c);
//		printf("%lld\n",res);
//	}
//
//
//
//
//
//}
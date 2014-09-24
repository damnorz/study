//#include<stdio.h>
//
//
/////这题也值得看一下；
//
//int main()
//{
//	int N,num;
//	scanf("%d%d",&N,&num);
//	int *a = new int [N+1];
//	for(int i=0;i<N;i++)
//		scanf("%d",&a[i]);
//	int *b = new int [N+1];
//	int sum=0;
//	b[0]=0;
//	for(int i=1;i<N+1;i++){
//		sum+=a[i-1];
//		b[i]=sum;
//	}
//	while(num--){
//		int m,n;
//		scanf("%d%d",&m,&n);
//		printf("%d\n",(b[n]-b[m-1]));
//	}
//}
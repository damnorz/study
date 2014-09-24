//#include<stdio.h>
//
//
//int a [1005];
//
//int main()
//{
//	int n;
//	scanf("%d",&n);
//	while(n--){
//		int num;
//		scanf("%d",&num);
//		for(int i =1;i<=num;i++){
//			scanf("%d",&a[i]);
//		}
//		for(int i=1;i<=num;i++){
//			for(int j =num;j>=i;j--){
//				if(a[j]<a[j-1]){
//					a[j] ^=a[j-1];
//					a[j-1] ^=a[j];
//					a[j]^=a[j-1];
//				}
//			}
//		}
//
//		printf("%d\n",a[(num+1)/2]);
//	}
//			
//
//}
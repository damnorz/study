//#include<iostream>
//#include<cstdio>
//#include<algorithm>
//using namespace std;
//
//
//int main()
//{
//	int n;
//	cin>>n;
//	char a[1001],b[1001],p[1001];
//	getchar();
//	while(n--){
//		gets(a);
//		int k =0;
//		int t=0;
//		for(int i =0;a[i]!='\0';i++){
//			if(a[i]>='a'&&a[i]<='z'||a[i]>='A'&&a[i]<='Z'){
//				b[k++]=a[i];
//			}else  if(a[i]>='0'&&a[i]<='9'){
//				p[t++]=a[i];
//			}
//		}
//		if(k==0){
//			printf("0\n");
//		}else{
//			printf("%d ",k);
//			for(int i =k-1;i>=0;i--){
//				printf("%c",b[i]);
//			}
//			printf("\n");
//		}
//		if(t==0){
//			printf("0\n");
//		}else{
//			printf("%d ",t);
//			sort(p,p+t);
//			for(int i=t-1;i>=0;i--){
//				printf("%c",p[i]);
//			}
//			printf("\n");
//		}
//		
//	}
//
//
//
//}
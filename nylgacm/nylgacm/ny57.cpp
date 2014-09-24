//#include<iostream>
//using namespace std;
//#include<stdio.h>
//
//int getnum(int b)
//{
//	int c[5];
//	c[0]=b/1000;
//	c[1]=b%1000/100;
//	c[2]=b%1000%100/10;
//	c[3]=b%1000%100%10;
//	for(int i=0;i<4;i++)
//		for(int j=0;j<3;j++){
//			if(c[j]<c[j+1]){
//				c[4] = c[j+1];
//				c[j+1] = c[j];
//				c[j] = c[4];
//			}
//		}
//
//
//	return (c[0]*1000+c[1]*100+c[2]*10+c[3]-(c[3]*1000+c[2]*100+c[1]*10+c[0]));
//
//}
//
//int main()
//{
//	int n;
//	scanf("%d",&n);
//	int num[2000];
//	char a[5];
//
//	while(n--){
//		for(int i =0;i<4;i++)
//			cin>>a[i];
//		int count =0;
//		int b;
//		sscanf(a,"%d",&b);
//		num[0] = b;
//		while(b!=6174){
//			b =getnum(b);
//			count++;
//			num[count] = b;
//	}
//		cout<<++count<<endl;
//	}
//
//		
//
//}
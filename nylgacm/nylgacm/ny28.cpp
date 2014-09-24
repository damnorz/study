//#include<iostream>
//using namespace std;
//
//int main()
//{
//	int n;
//	cin>>n;
//	int result[10000];
//	for(int i=0;i<10000;i++)
//		result[i]=0;
//	result[0]=1;
//	int m =1;
//	for(int i =2;i<=n;i++){
//		int c = 0;
//		for(int j =0;j<10000;j++){
//			int s = result[j] * i +c;
//			result[j] = s%10;
//			c = s/10;
//			
//		}
//	}
//	int s=0;
//	for(int i =10000-1;i>=0;--i)
//		if(result[i]!=0){
//			s= i;
//			break;
//		}
//
//	for(int i=s;i>=0;i--)
//		cout<<result[i];
//	cout<<endl;
//
//
//
//}
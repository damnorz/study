//#include<iostream>
//using namespace std;
//#include<string>
//#include<memory.h>
//
//
//char a [1001];
//char b [1001];
//
//int ada [1001];
//int adb [1001];
//int res [1001];
//
//int main()
//{
//	int n;
//	cin>>n;
//	int c =0;
//	while(n--){
//		c++;
//		cin>>a>>b;
//		//scanf("%s%s",a,b);
//		int lena,lenb;
//		lena = strlen(a);
//		lenb = strlen(b);
//		int lenmin = (lena > lenb)?lenb:lena;
//		int lenmax = (lena > lenb)?lena:lenb;
//		memset(ada,0,sizeof(ada));
//		memset(adb,0,sizeof(adb));
//		for(int i =0;i<lena;i++){
//			ada[lena-i-1] = a[i]-'0';
//		}
//		for(int i =0;i<lenb;i++){
//			adb[lenb-i-1] = b[i]-'0';
//		}
//		for(int i=0;i<lenmax;i++){
//			res[i] = ada[i]+adb[i];
//		}
//		for(int i=0;i<lenmax;i++){
//			if(res[i]>=10){
//				res[i]-=10;
//				res[i+1]++;
//			}
//		}
//		cout<<"Case "<<c<<":"<<endl;
//		cout<<a<<" + "<<b<< " = ";
//		if(res[lenmax]!=0)
//			cout<<res[lenmax];
//
//		for(int i=lenmax-1;i>=0;i--)
//			cout<<res[i];
//		cout<<endl;
//
//	}
//}
//
//
//
//

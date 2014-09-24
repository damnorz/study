//#include<iostream>
//#include<string>
//using namespace std;
//
//int main()
//{
//	while(true){
//		string s1,s2;
//		cin>>s1>>s2;
//		bool flag = false;
//		if((s1=="0")&&(s2=="0"))
//			break;
//		if((s1[0] == '-') && (s2[0] !='-')){
//			cout<<"a<b"<<endl;
//			continue;
//		}
//		else if((s1[0] != '-') && (s2[0] =='-')){
//			cout<<"a>b"<<endl;
//			continue;
//		}
//		else if((s1[0] == '-') && (s2[0] =='-'))
//			flag = true;
//		int i =0;
//		if(flag)
//			i=1;
//		if(s1.length() > s2.length()){
//			if(flag)
//				cout<<"a<b"<<endl;
//			else
//				cout<<"a>b"<<endl;
//			continue;
//		}
//		int  big =0;
//		for(;i<s1.length();i++){
//			if(s1[i]>s2[i]){
//				big = 1;
//				break;}
//			else if(s1[i]<s2[i]){
//				big = -1;
//				break;
//			}
//		}
//		if(flag)
//			big *= -1;
//		switch (big){
//			case 1:
//				cout<<"a>b"<<endl;
//				break;
//			case 0:
//				cout<<"a==b"<<endl;
//				break;
//			case -1:
//				cout<<"a<b"<<endl;
//				break;
//		}
//	}
//		
//
//
//
//}
//
//
//
//
//
//
//
///////ÕâÖÖ¼ò±ã°¡£¡£¡£¡£¡£¡£¡£¡£¡£¡
// 
//#include<iostream>
//#include<string>
//using namespace std;
//
//int main()
//{
//	string a,b;	
//	while(cin>>a>>b)
//	{
//		if(a=="0"&&b=="0")
//			return 0;
//		if(a==b)
//			cout<<"a==b"<<endl;
//		else if(a[0]=='-'&&b[0]=='-')
//			{
//				if(a.substr(1,string::npos)>b.substr(1,string::npos)||a.length()>b.length())
//					cout<<"a<b"<<endl;
//				else cout<<"a>b"<<endl;
//			}
//		else if(a>"0"&&b>"0"||a<"0"&&b<"0"&&a.length()>b.length()||a>b)
//				cout<<"a>b"<<endl;
//		else if(a<"0"&&b>"0"&&a.length()>b.length()||a>b)
//				cout<<"a<b"<<endl;
//			
//	}
//}        
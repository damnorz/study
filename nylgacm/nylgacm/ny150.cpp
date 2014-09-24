//#include<iostream>
//#include<stack>
//using namespace std;
//
//#define max 100
//
//int main()
//{
//	stack <char> s;
//	int n;
//	char s1[max],s2[max];
//	int result[max];
//	int len=0;
//	int l =0;
//	while(cin>>n>>s1>>s2){
//		s.push(s1[0]);
//		len=1;
//		l =0;
//		int i=0;int j =0;
//		result[l] = 1;
//		l++;
//		while(i<n&&j<n){
//			if(s.size()&&s.top()==s2[j]){
//				s.pop();
//				result[l]=0;
//				l++;
//				j++;
//			}else{
//				if(i==n)
//					break;
//				s.push(s1[++i]);
//				result[l++]=1;
//			}
//		}
//		
//
//		if(i==n){
//			cout<<"No."<<endl;
//		}else{
//			cout<<"Yes."<<endl;
//			for(int a =0;a<l;a++){
//				if(result[a])
//					cout<<"in"<<endl;
//				else
//					cout<<"out"<<endl;
//			}
//
//		}
//		cout<<"FINISH"<<endl;
//	}
//
//}
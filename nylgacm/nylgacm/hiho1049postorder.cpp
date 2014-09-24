//#include<iostream>
//#include<string>
//using namespace std;
//
//string calc(string str1,string str2){
//	if(str1.length()<=1){
//		return str1;
//	}else{
//		char root = str1[0];
//		int index = str2.find(root);
//
//		string str2l = str2.substr(0,index);
//		string str2r = str2.substr(index+1);
//
//		string str1l = str1.substr(1,str2l.length());
//		string str1r = str1.substr(str2l.length()+1);
//
//		return calc(str1l,str2l)+calc(str1r,str2r)+root;
//
//	}
//
//}
//
//int main()
//{
//	string str1,str2;
//	cin>>str1>>str2;
//
//	cout<<calc(str1,str2)<<endl;
//}
//

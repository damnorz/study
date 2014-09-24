//#include<iostream>
//#include<string>
//#include<vector>
//using namespace std;
//
//class kmp{
//public:
//	kmp(string p):pattern(p){
//		f= vector<int>(pattern.length(),-1);
//		initf(pattern);
//	}
//	//int getres(string target){
//	//	int count = 0;
//	//	int l = target.length();
//	//	for(int i =0;i<(target.length()-pattern.length()+1);i++){
//	//		int tmp = find(i,target);
//	//		if(tmp==-1)break;
//	//		else{
//	//			i = tmp+f[pattern.length()-1]-1;
//	//			count++;
//	//		}
//	//		
//	//	}
//	//	return count;
//	//}
//	int find(int start,string target);
//protected:
//	void initf(const string &t);
//	//string target;
//	string pattern;
//	vector<int> f;
//};
//
//void kmp::initf(const string &t){
//	int len = t.length();
//	for(int j =1;j<len;j++){
//		int u = f[j-1];
//		while(t[j]!=t[u+1] && u>0)u = f[u];
//		if(t[j]==t[u+1]){
//			f[j] = u+1;
//		}else
//			f[j] = -1;
//	}
//}
//
//int kmp::find(int start,string target){
//	string t=pattern;
//	int i = start;
//	int lent = t.length();
//	int lens = target.length();
//	int j =0;
//	int res = 0;
//	while(i<lens && j<lent){
//		if(t[j]==target[i]){
//			i++;
//			j++;
//		}else if(j==0){
//			i++;
//		}else{
//			j = f[j-1]+1;
//		}
//		if(j==lent){
//			res++;
//			j = f[j-1]+1;
//		}
//	}
//	return res;
//
//	//if(j<lent)return -1;
//	//else
//	//	return i-j;
//
//}
//
//
//
//
//
//int main()
//{
//    int n;
//    cin>>n;
//    while(n--){
//        string target;
//        string pattern;
//        cin>>pattern>>target;
//	    kmp t = kmp(pattern);
//	    int r =t.find(0,target);
//	    cout<<r<<endl;
//    }
//}
//

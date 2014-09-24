//#include<iostream>
//#include<string>
//#include<vector>
//using namespace std;
//
//
//int calc(int pos,string s,char ch){
//    vector<char> target(s.length()+1);
//    for(int i = 0;i<pos;i++){
//        target[i] = s[i];
//    }
//    target[pos]=ch;
//    for(int i =pos+1;i<=s.length();i++){
//        target[i] = s[i-1];
//    }
//    vector<bool> f(s.length()+1,false);
//    int l = s.length();
//    int res = 0;
//    while(true){
//        bool flag = false;
//        for(int i = 0;i<l;i++){
//            while(i<l && target[i]==target[i+1]){
//                flag = true;
//                f[i] = f[i+1] = true;
//                i++;
//            }
//        }
//        if(!flag)break;
//        for(int i =0;i<=l;i++){
//            if(f[i])res++;
//        }
//        int j =0;
//        for(int i =0;i<=l;i++){
//            if(f[i]==false){
//                target[j++]=target[i];
//            }
//        }
//        l=j-1;
//    }
//	return res;
//}
//
//int main()
//{
//    int n;
//    cin>>n;
//    while(n--){
//        string target ;
//        cin>>target;
//        int res = 0;
//        for(int i =0;i<=target.length();i++){
//            for( char ch = 'A';ch<='C';ch++){
//                int t = calc(i,target,ch);
//                res = max(res,t);
//            }
//        }
//        cout<<res<<endl;
//        
//    }
//    
//    
//}

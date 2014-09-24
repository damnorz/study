//#include<iostream>
//#include<algorithm>
//#include<string>
//using namespace std;
//
//typedef struct node{
//	int num;
//	string s;
//};
//
////º∆À„ƒÊ–Ú
//int caluInverse(const node n){
//	int count =0;
//	int length = n.s.length();
//	for(int i =0;i<length;i++){
//		for(int j =i+1;j<length;j++){
//			if(n.s[i]>n.s[j])
//				count++;
//		}
//	}
//	return count;
//}
//
//
//bool cmp(node s1,node s2){
//
//	return s1.num<s2.num;
//
//}
//
//
//
//int main()
//{
//	int l,n;
//	cin>>l>>n;
//	node a[101];
//	for(int i =0;i<n;i++){
//		cin>>a[i].s;
//		a[i].num = caluInverse(a[i]);
//	}
//	stable_sort(a,a+n,cmp);
//	for(int i =0;i<n;i++){
//		cout<<a[i].s<<endl;
//	}
//
//}
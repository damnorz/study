//#include<iostream>
//#include<string>
//using namespace std;
//
//const int MAX = 26;
//
//typedef struct node{
//    int t;
//    node *next[MAX];
//}trie;
//
//int search(trie *root,string s){
//	trie *p = root;
//	int i =0;
//	for(;i<s.length();i++){
//		p = p->next[s[i]-'a'];
//		if(p==NULL)break;
//	}
//	if(p!=NULL && i==s.length()){
//		return p->t;
//	}else
//		return 0;
//}
//
//void insert(trie *root,string s){
//	if(root == NULL || s.length()==0)
//		return ;
//	trie *p = root;
//	for(int i=0;i<s.length();i++){
//		if(p->next[s[i]-'a'] == NULL){
//			trie* tmp = new trie();
//			for(int i =0;i<MAX;i++){
//				tmp->next[i]=NULL;
//			}
//			tmp->t = 1;
//			p->next[s[i]-'a'] = tmp;
//			p = tmp;
//			tmp = NULL;
//			delete tmp;
//		}else{
//			p = p->next[s[i]-'a'];
//			p->t +=1;
//		}
//	}
//}
//
//
//int main(){
//    int n ;
//	cin>>n;
//	trie * root= new trie();
//	root->t = 0;
//	for(int i =0;i<MAX;i++){
//		root->next[i] = NULL;
//	}
//	while(n>0){
//		string s;
//		cin>>s;
//		insert(root,s);
//		--n;
//	}
//	int m;
//	cin>>m;
//	while(m>0){
//		string s;
//		cin>>s;
//		cout<<search(root,s)<<endl;
//		--m;
//	}
//    
//    
//    
//}
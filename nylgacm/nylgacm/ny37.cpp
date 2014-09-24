//#include<iostream>
//#include<stdio.h>
//#include<memory.h>
//#include<string>
//using namespace std;
//
//#define max(a,b) (a>b?a:b);
//
//int c[1001][1001];
//
//
//int lcs(char *s1)
//{
//	
//	int len = strlen(s1);
//	int x = len;
//	char *s2 =new char[len+1];
//	int t =0;
//	while(x--){
//		s2[x]= s1[t];
//		t++;
//	}
//	memset(c,0,sizeof(c));
//	int i=1,j=1;
//	for(i=1;i<=len;i++){
//		for(j=1;j<=len;j++){
//			if(s1[i-1]==s2[j-1])
//				c[i][j] = c[i-1][j-1]+1;
//			else{
//				c[i][j] = max(c[i][j-1],c[i-1][j]);
//			}
//		}
//	}
//	return len-c[len][len];
//
//
//}
//
//
//int main()
//{
//	int n;
//	cin>>n;
//	while(n--){
//		char s1[1001];
//		scanf("%s",s1);
//		cout<<lcs(s1)<<endl;
//	}
//
//
//}
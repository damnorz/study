//#include<iostream>
//#include<stdio.h>
//#include<string>
//using namespace std;
//
//
//
//
//
//int main()
//{
//	int n;
//	cin>>n;
//
//
//	while(n--){
//		string s1,s2;
//		cin>>s1>>s2;
//		int x_len = s1.length();
//		int y_len = s2.length();
//		int c[1001][1001];
//		//int b[100][100] = {{0,0}};
//		 
//		for(int i=1;i<=x_len;++i)c[i][0]=0;
//		for(int i=1;i<=y_len;++i)c[0][i]=0;
//
//		for(int i =1;i<=x_len;i++){
//			for(int j=1;j<=y_len;j++){
//				if(s1[i-1] == s2[j-1]){
//					c[i][j]=c[i-1][j-1]+1;
//					//b[i][j] =1;
//				}
//				else if(c[i-1][j]>=c[i][j-1]){
//					c[i][j] =c[i-1][j];
//					//b[i][j]=3;
//				}
//				else{
//					c[i][j] = c[i][j-1];
//					//b[i][j] = 2;
//				}
//			}
//		}
//
//		//for(int i =1;i<=x_len;i++){
//		//	for(int j=1;j<=y_len;j++){
//		//		cout << c[i][j] << "  ";
//		//	}
//		//	cout << endl;
//		//}
//
//		printf("%d\n",c[x_len][y_len]);
//		//string re = "";
//		//int j = y_len;
//		//for(int i =x_len;i>0&&j>0;){
//		//	if(b[i][j]==1){
//		//		re+=s1[i-1];
//		//		i--;
//		//		j--;
//		//	}else if(b[i][j] ==2){
//		//		j--;
//		//	}
//		//	else if(b[i][j] ==3){
//		//		i--;
//		//	}
//		//}
//
//		//for(int i =re.length();i>0;i--){
//		//	cout<<re[i-1];
//		//}
//		//cout<<endl;
//
//	}
//
//
//
//
//
//}
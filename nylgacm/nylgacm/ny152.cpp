//#include <iostream>
//#include <stdio.h>
//#include <cmath>
//#include<vector>
//#include<stack>
//#include<algorithm>
//using namespace std;
//
//class Solution {
//public:
//    int min(int a,int b){
//        return (a>b)?b:a;
//    }
//
//    int minimumTotal(vector<vector<int> > &triangle) {
//            int *a=new int [(int)triangle.size()];
//            for(int i = 0;i<triangle.size();i++)a[i]=0;
//        for(int i =triangle.size()-1;i>=0;i--){
//            for(int j = 0;j<triangle[i].size();j++){
//                a[j]=min(triangle[i][j]+a[j],triangle[i][j+1]+a[j]);
//            }
//        }
//        return a[0];
//    }
//};
//
//int main(){
//
//
//		Solution t;
//		int a[] = {2,0,2};
//		 int re = t.minimumTotal(a,3);
//
//
//
//
//}
//

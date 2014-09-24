//#include<vector>
//#include<string>
//#include<set>
//#include<algorithm>
//#include<map>
//#include<stack>
//#include<unordered_set>
//#include<queue>
//#include<unordered_map>
//using namespace std;
//class Solution {
//public:
//    vector<vector<int> > fourSum(vector<int> &num, int target) {
//        sort(num.begin(),num.end());
//        vector<vector<int> > res;
//        int len = num.size();
//        if(len<4)return res;
//        for(int i =0;i<len;i++){
//            if(i!=0 && num[i]==num[i-1]){
//                continue;
//            }
//            for(int j = i+1;j<len;j++){
//                if(j!=i+1 && num[j] == num[j-1]){
//                    continue;
//                }
//                int start =j+1;
//                int end = len-1;
//                
//
//                
//                while(start<end){
//                    int sum = num[i]+num[j]+num[start]+num[end];
//                    if(sum == target){
//                        vector<int> a;
//                        a.push_back(num[i]);
//                        a.push_back(num[j]);
//                        a.push_back(num[start]);
//                        a.push_back(num[end]);
//                        res.push_back(a);
//                        start++;
//                        
//                    }else if(sum<target){
//                        start++;
//                    }else if(sum>target){
//                        end--;
//                    }
//                    
//                        while(start!=j+1&&start<len-1 &&( num[start] == num[start-1])){
//                            start++;
//                        }
//                        while(end!=len-1&&end > j+1 && (num[end] == num[end+1])){
//                            end--;
//                        }
//                    
//                }
//                
//
//
//
//            }
//
//        }
//
//        return res;
//    }
//};
//
//
//
//
//int main(){
//	Solution s;
//	string tt =  " a ";
//	string tmp[] = {"Listen","to","many,","speak","to","a","few."};
//	vector<string> t(tmp,tmp+7);
//	//vector<string> t;
//	t.push_back("");
//	int arr [10] = {1};
//	
//
//
//
//
//
//
//
//}
//#include<iostream>
//#include<vector>
//#include<algorithm>
//using namespace std;
//
//class sortreview
//{
//	public:
//	//sortreview();
//	//~sortreview();
//
//	static void selectionsort(vector<int> &a)
//	{
//		int l = a.size();
//		if(l<=1)return;
//		for(int i =0;i<l;i++){
//			int min = i;
//			int j=i+1;
//			for(;j<l;j++){
//				if(a[j]<a[min]){
//					min = j;
//				}
//			}
//			swap(a[i],a[min]);
//		}
//	}
//
//	void insertsort(vector<int> &a)
//	{
//		int l = a.size();
//		if(l<=1)return;
//		for(int i =1;i<l;i++){
//			for(int j =i;j>0&&a[j]<a[j-1];j--){
//				swap(a[j],a[j-1]);
//			}
//		}
//	}
//
//	void shellsort(vector<int> &a)
//	{
//		int l = a.size();
//		int n = 1;
//		while(3*n<l)n = 3*n+1;
//		while(n>=1){
//			for(int i =n;i<l;i++){
//				for(int j =i;j>=n&&a[j]<a[j-n];j-=n){
//					swap(a[j],a[j-n]);
//				}
//			}
//			n = n/3;
//		}
//	}
//
//
//
//
//	void mergesort(vector<int> &a){
//		int l = a.size();
//		if(l<=1)return;
//		aux =vector<int>(l,0);
//		msort(a,0,l-1);
//	}
//
//	void quicksort(vector<int> &a){
//		qsortimpl(a,0,a.size()-1);
//	}
//
//
//	
//protected:
//	vector<int> aux;
//
//	int qsortpartition(vector<int> &a,int l ,int h){
//		int i = l+1;
//		int j =h;
//		int v = a[l];
//		while(true){
//			while(a[i]<=v && i<h)i++;
//			while(a[j]>=v && j>l)j--;
//			if(i>=j)break;
//			swap(a[i],a[j]);
//		}
//		swap(a[l],a[j]);
//		return j;
//	}
//
//	void qsortimpl(vector<int> &a,int l,int h){
//		if(l>=h)return;
//		int j = qsortpartition(a,l,h);
//		qsortimpl(a,l,j-1);
//		qsortimpl(a,j+1,h);
//	}
//
//	void msort(vector<int> &a,int l,int h){
//		if(l>=h)return;
//		int mid = (l+h)/2;
//		msort(a,l,mid);
//		msort(a,mid+1,h);
//		merge(a,l,mid,h);
//
//	}
//
//	void merge(vector<int> &a,int l,int mid,int h){
//		int i = l;
//		int j = mid+1;
//
//		for(int k = l;k<=h;k++){
//			aux[k] = a[k];
//		}
//		for(int k=l;k<=h;k++){
//			if (i>mid) a[k] = aux[j++];
//			else if(j>h) a[k] = aux[i++];
//			else if(a[i]<a[j]) a[k] = aux[i++];
//			else a[k] = aux[j++];
//		}
//	}
//};
//
//
//int main(){
//	int a[] = {5,6,8,14,11,5,7,16,18,9,0,3,1,3,2,12,4,6,23,22};
//	vector<int> tar(a,a+20);
//	sortreview t;
//	t.quicksort(tar);
//
//	sortreview::selectionsort(tar);
//
//}

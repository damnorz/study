//#include<stdio.h>
//#include<algorithm>
//using namespace std;
//
//
//struct time{
//	int startime;
//	int endtime;
//};
//
//bool cmp(time a,time b){
//	return a.endtime<b.endtime;
//}
//
//
//int main()
//{
//	int n;
//	scanf("%d",&n);
//	while(n--){
//		int num;
//		scanf("%d",&num);
//		time * a = new time[num];
//		for(int i =0;i<num;i++){
//			scanf("%d%d",&a[i].startime,&a[i].endtime);
//		}
//		sort(a,a+num,cmp);
//		int p = a[0].endtime;
//		int count =1;
//		for(int i=1;i<num;i++){
//			if(a[i].startime-1>=p){
//				p = a[i].endtime;
//				count++;
//			}
//		}
//		printf("%d\n",count);
//	}
//	
//}
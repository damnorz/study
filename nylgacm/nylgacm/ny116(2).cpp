// #include<stdio.h>
//
//#define size 1000008
//
//
//int C[size];
//
//int len;
//
//int lowbit(int i)
//
//{
//
//   return -i & i;
//
//}
//
//int sum(int i){
//
//  int res=0;
//
//  while(i>0){
//
//    res+=C[i];
//
//    i-=lowbit(i);
//
//  }
//
//  return res;
//
//
//}
//
//void add(int i,int x){
//
//    while(i<=len){
//
//        C[i]+=x;
//
//        i+=lowbit(i);
//
//    }
//
//}
//
//int main()
//
//{
//
//    int q;
//
//    scanf("%d%d",&len,&q);
//
//    int x;
//
//    for(int i=1;i<=len;i++){
//
//        scanf("%d",&x);
//
//        add(i,x);
//
//    }
//
//    char operate[10];
//
//    int star,end;
//
//    while(q--){
//
//            scanf("%s%d%d",operate,&star,&end);
//
//            if(operate[0]=='A')
//
//                add(star,end);
//
//            else
//
//               printf("%d\n",sum(end)-sum(star-1));
//
//    }
//
//
//}
//#include<stdio.h>
//#include<memory.h>
//#include<string.h>
//
//
//
//int main()
//{
//	int x,y,l;
//	char s [10];
//	int flag[101][101];
//	memset(flag ,0,sizeof(flag));
//
//	int n;
//	scanf("%d",&n);
//	getchar();
//
//	while(n--){
//					int sum = 0;
//		 scanf("%s",s);
//		 scanf("%d%d%d",&x,&y,&l);
//		 if(strcmp(s,"BLACK")==0)
//			  for(int i=x;i<=x+l-1&&i<=100;i++) 
//				for(int j=y;j<=y+l-1&&j<=100;j++){
//					if(i<1|j<1)
//						continue;
//					flag[i][j]=1; 
//				}
//		 else if(strcmp(s,"WHITE")==0)
//			 for(int i=x;i<=x+l-1&&i<=100;i++) 
//				for(int j=y;j<=y+l-1&&j<=100;j++){
//					if(i<1|j<1)
//						continue;
//					flag[i][j]=0; 
//				}
//		 else if((strcmp(s,"TEST")==0)){
//			 for(int i=x;i<=x+l-1&&i<=100;i++) 
//				for(int j=y;j<=y+l-1&&j<=100;j++){
//										if(i<1|j<1)
//						continue;
//
//					if(flag[i][j]){
//
//						sum++;
//
//					}
//
//				}
//														printf("%d\n",sum);
//		 }
//	}
//
//
//
//}
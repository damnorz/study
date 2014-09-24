//#include<string.h>
//#include<stdio.h>
//
//
//int main()
//{
//	char a[11],b[1001];
//	int n;
//	scanf("%d",&n);
//	while(n--){
//		scanf("%s%s",a,b);
//		int lena = strlen(a);
//		int count =0;
//		int j;
//		int max = strlen(b)-strlen(a);//所作的仅仅是一个计数器的工作，它从内存的某个位置（可以是字符串开头，中间某个位置，甚至是某个不确定的内存区域）开始扫描，直到碰到第一个字符串结束符'\0'为止，然后返回计数器值
//		for(int i =0;i<=max;i++){				
//			if(a[0] == b[i]){
//				for( j=1;j<lena;j++){
//					if(a[j]!=b[i+j])
//						break;
//				}
//				if(j==lena)count++;
//			}
//		}
//		printf("%d\n",count);
//	}
//
//}
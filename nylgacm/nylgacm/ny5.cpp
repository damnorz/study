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
//		int max = strlen(b)-strlen(a);//�����Ľ�����һ���������Ĺ����������ڴ��ĳ��λ�ã��������ַ�����ͷ���м�ĳ��λ�ã�������ĳ����ȷ�����ڴ����򣩿�ʼɨ�裬ֱ��������һ���ַ���������'\0'Ϊֹ��Ȼ�󷵻ؼ�����ֵ
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
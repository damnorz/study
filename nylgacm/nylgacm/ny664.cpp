//#include<stdio.h>
//#include<string.h>
//#define max 10001
//int main()
//{
//char a[max];
//int i,n,x,y,s;
//while(gets(a)!=NULL)
//{
//if(a[0]=='0') return 0;
//n=strlen(a);
//for(;n>6;)
//{
//y=(a[n-1]-'0')*5;
//n--;
//x=(a[n-3]-'0')*100+(a[n-2]-'0')*10+a[n-1]-'0';
//x=x-y;
//a[n-3]=x/100+'0';
//a[n-2]=(x/10)%10+'0';
//a[n-1]=x%10+'0';
//}
//for(i=0,s=0;i<n;i++)
//{
//s=s*10;
//s=s+a[i]-'0';
//}
//if(s%17==0)
//printf("1\n");
//else
//printf("0\n");
//}
//}
//

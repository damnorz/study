//#include<stdio.h>
//#include<string.h>
//int main()
//{
//    int m,k,a[101][101],i,j;
//    scanf("%d",&m);
//    while(m--)
//    {
//        for(i=0;i<101;i++)
//            memset(a[i],0,sizeof(a[i]));
//        scanf("%d",&k);
//        a[1][0]=1;a[2][0]=5;
//        for(i=3;i<=k;i++)
//        {
//            for(j=0;j<100;j++)
//                a[i][j]=a[i-1][j]*4;
//            a[i][0]+=1;
//            for(j=0;j<100;j++)
//                if(a[i][j]>9){a[i][j+1]+=a[i][j]/10;a[i][j]%=10;}
//        }
//        j=99;
//        while(a[k][j]<=0)j--;
//        for(i=j;i>=0;i--)
//            printf("%d",a[k][i]);
//        printf("\n");
//    }
//}
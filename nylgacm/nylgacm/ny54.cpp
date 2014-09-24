

    //#include <stdio.h>  
    //  
    //int main(){  
    //    int t, a[13], bank, pock, ok, i;  
    //    scanf("%d", &t);  
    //    while(t--){  
    //        for(i = 1; i < 13; ++i)  
    //            scanf("%d", &a[i]);  
    //        pock = bank = 0; ok = 1;  
    //        for(i = 1; i < 13; ++i){  
    //            pock += 300;  
    //            pock -= a[i];  
    //            if(pock < 0){ok = 0; break;}  
    //            else while(pock >= 100) bank += 1, pock -= 100;            
    //        }  
    //        if(ok == 0) printf("-%d\n", i);  
    //        else printf("%d\n", pock + bank * 120);  
    //    }  
    //    return 0;  
    //}  
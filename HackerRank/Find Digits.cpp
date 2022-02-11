#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main() {
    int t,n,temp,count,num;
    scanf("%d",&t);
    while(t--){
        count=0;
        scanf("%d",&n);
        num = n;
            while(n>0){
                temp = n%10;
                if(temp == 0 ){
                     n /= 10;
                    continue;
                }
                if(num%temp==0){
                    count++;
                }
                
                n /= 10;
            }
        printf("%d\n",count);
    }
    return 0;
}

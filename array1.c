
#include<stdio.h>
 int main(){
   int n,freq[40]={0},i;
    for (i=0; i<10; i++){
      printf("enter the marks ");
       scanf("%d", &n);
        if (n >60)
         freq[n-61]++;
          
    }
     for (i=0; i<40; i++){
       if (freq [i]>0)
        printf("%d\n marks occured %d\n times", i+61, freq[i]);
          
     }
    
 }
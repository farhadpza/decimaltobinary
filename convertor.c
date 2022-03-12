/*
  Hello , in this homework we want to show the binary of decimal number

  I will use two functions inttobinary to get the binary from decimal and showbinary to show the results 

  

*/

#include <stdio.h>
int * inttobyte32(int num);
void showbinary(int *p);
int main(){
    // to use function: 
    int choice;
    printf("\n\nPlease select the convert method:");
    printf("\n [1] Decimal to Binary");
    printf("\nYour Choice:");
    scanf("%d",&choice);
    switch (choice){
        case 1:
        int n;printf("\nPlease enter number in decimal:");
        scanf("%d",&n);
        showbinary(inttobyte32(n));
        break;
        default:
        printf("Wrong choice please try again");
    }
   
    
    
   
    return 0;
}
int * inttobyte32(int num){
static int nums[32];
for (int i=0;i<32;i++)
   nums[i]=0;int c=31;
   while(num!=0){
      nums[c]=num%2;
      num=num/2;
      c--;
   }


int *p=nums;
return p;
}
void showbinary(int *p){
for (int i=1;i<=32;i++){
     printf("%d",*p);
     p++;
     if(i%8==0)
       printf(" ");
     }
}

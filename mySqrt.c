#include<stdio.h>

int mySqrt(int x){
    long long int a,i;
    if(x==0||x==1){
        a=x;
    }
    if(x==2||x==3){
        a=1;
    }   
   for (i = 2; i < x; i++)
   {
    if ((i*i)<=x && ((i+1)*(i+1))>x)
    {
       a=i;
       break;
    }
   }
   return a;  
}   
void main(){
 int n;
 printf("Enter the number to find the square of:");
 scanf("%d",&n);
 printf("square root:%d",mySqrt(n));
}
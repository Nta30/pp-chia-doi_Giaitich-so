#include<stdio.h>
 double f(float x, float m){
  return x*x-m;
 }
 double funct(float a, float b, float e, float m){
   float x;
   while(b-a>=e){
    x=(a+b)/2;
    if(f(a,m)*f(x,m)>0){
     a=x;
    }else{
     b=x;
    }
   }
   return (a+b)/2;
  }
  int main(){
   float a,b,e,m;
   scanf("%f%f%f",&a,&b,&e);
   printf("Nhap so can tinh can:");
   scanf("%f",&m);
   float x=funct(a,b,e,m);
   printf("%f",x);
   return 0;
  }

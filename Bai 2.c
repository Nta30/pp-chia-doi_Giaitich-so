/** Giai phuong trinh: e^x - x^2 + 3x -2 = 0
            for(0<=x<=1) va e=10^-5;                    
**/
#include<stdio.h>
#include<math.h>
  double f(double x);
  double Giaiphuongtrinh();
  
  int main(){
   double x;
   printf("Giai phuong trinh e^x - x^2 + 3x -2 = 0\n");
   x=Giaiphuongtrinh();
   printf("x=%lf",x);
  }
  
  double f(double x){
  	return exp(x)-pow(x,2)+3*x-2;
  }
  double Giaiphuongtrinh(){
  	double a=0,b=1;
  	double e=0.00000001,x;
  	while(b-a>=e){
  		x=(double) (a+b)/2;
  		if(f(a)*f(x)>0){
  			a=x;
		  }else{
		  	b=x;
		  }
	  }
	  return (a+b)/2;
  }

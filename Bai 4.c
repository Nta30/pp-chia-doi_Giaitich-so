/**   Giai phuong trinh: x * cos(x) - 2 * x * x + 3 * x - 1 = 0 
     for: 0.2<=x<=0.3 and 1.2<=x<=1.3 , e=0.00001
**/
#include<stdio.h>
#include<math.h>
 double f(double x);
 double Giaiphuongtrinh(double a, double b);
 
 int main(){
 	double x;
 	printf("Giai phuong trinh: xcos(x) - 2x^2 + 3x - 1 = 0\n");
 	printf("x1 = %lf\n",Giaiphuongtrinh(0.2,0.3));
 	printf("x2 = %lf",Giaiphuongtrinh(1.2,1.3));
 }
 
 double f(double x){
 	return x * cos(x) - 2 * x * x + 3 * x - 1;
 }
 double Giaiphuongtrinh(double a, double b){
 	double x,e=0.00001;
 	while(b-a>=e){
 		x=(a+b)/2;
 		if(f(a)*f(x)>0){
 			a=x;
		 }else{
		 	b=x;
		 }
	 }
	 return (a+b)/2;
 }

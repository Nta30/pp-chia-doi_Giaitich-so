/**    Giai phuong trinh: 2 * x * cos(2x) - (x + 1) * (x + 1) = 0 
      for: -3<=x<=-2 and -1<=x<=0 , e=10^-5 
**/
#include<stdio.h>
#include<math.h>
 float f(double x){
 	return 2 * x * cos(2*x) - (x + 1) * (x + 1);
 }
 float Giaiphuongtrinh(double a, double b){
 	double e=0.00001,x;
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
 int main(){
 	double x,a,b;
 	printf("Giai phuong trinh: 2 * x * cos(2x) - (x + 1) * (x + 1) = 0\n");
 	printf("x1 = %lf\n",Giaiphuongtrinh(-3,-2));
 	printf("x1 = %lf\n",Giaiphuongtrinh(-1,0));
 }
 

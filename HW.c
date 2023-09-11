# include <stdio.h>
# include <math.h>

double f(double x){
    return sin(x);
}


int main(){
    double h,y,trapezoidal_value,sum, a=0, b= M_PI,error,error_1=0,Convergence_Order;
    int N, i;

    for (N  = 20; N <= 320 ; N *=2)//used a for loop to get all 5 values together by multiplying the N value by 2
    {
        h =(b-a)/N;
        sum = (f(a)+f(b))/2; //first find a part of a Trapezoidal sum unsing lower and upper limit of the function

        for ( i = 1; i < N; i++)
        {
            y = a + i*h;
            sum += f(y); //here what I did was, evaluate the middle part of the Trapezoodal sum
            
        }
        trapezoidal_value = h*sum;
        error= 2-trapezoidal_value; //Note: 2 is the exact value of the integral

        Convergence_Order = log10(error_1/error)/log(2);
        error_1=error; //you can see at first I initialised the error_1=0, So at the first Convergence Order I will expect an -infinity term
    
        printf(" \nThe approximation value of the integral when N=%d is: %lf with error=%lf & the convergence order is %lf "
        ,N, trapezoidal_value,error ,Convergence_Order); 
    }
      
//I haven't used the error bound, beecause the error will enouch for the calculations. As we know, error bound is the suprimum of the error    

}
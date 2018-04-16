#include<stdio.h>

int f=1<<14;

int 
I_to_f(int n){
  return n*f;
}

int 
f_to_I(int x){
  if(x>=0) return (x + f / 2) / f ;
   return (x - f / 2) / f ;
}

int
add_f_to_f(int x,int y){
    return x+y; 
}

int 
sub_f_from_f(int x,int y){
  return x-y;
}

int 
add_f_to_I(int x,int n){
  return x + n * f;
}

int 
 sub_I_from_f (int x,int n){
  return x - n * f;
}
int
Mul_f_to_f (int x,int y){
  return ((int64_t) x) * y / f ;
}
int 
Mul_f_to_I (int x,int n){
  return x*n;
}
int
Div_f_over_f(int x,int y){
  return ((int64_t) x) * f / y; 
}

int 
Div_f_over_I (int x,int n){
  return x/n;
}

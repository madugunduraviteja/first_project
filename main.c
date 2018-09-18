#include<stdio.h>
#include<addition.h>
#include<subtraction.h>
#include<mul.h>
#include<div.h>
#include<mod.h>
int main()
{
  int add,sub,mul,div,mod;
  int a = 20 ,b =40 ;
  add = add(a,b);
  sub = sub(a,b);
  mul = mul(a,b);
  div = div(a,b);
  mod = mod(a,b);
  printf(addition %d\n",add);
  printf(subtraction %d\n",sub);
  printf(multiplication %d\n",mul);
  printf(division %d\n",div);
  printf(modulus %d\n",mod);
}  

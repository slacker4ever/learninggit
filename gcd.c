#include <stdio.h>
int gcd(int a,int b){
  while(a!=b){
    if(a>b){
      a-=b;
    }else{
      b-=a;
    }
  }
  return a;
}

void main(){
  int a,b;
  printf("Enter two numbers");
  scanf("%d%d",&a,&b);
  printf("The GCD is %d , LCM is %d",gcd(a,b),(a*b)/gcd(a,b));

}

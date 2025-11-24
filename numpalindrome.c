#include<stdio.h>
int palin(int n){
  int rev=0,orig=n;
  while(n!=0){
    rev=rev*10 + n%10;
    n/=10;
  }
  if(rev==orig){
    return 1;
  }
  return 0;


}
int main(){
  int num;
  printf("Enter a num : ");
  scanf("%d",&num);
  printf("%s",palin(num));
  return 0;
}

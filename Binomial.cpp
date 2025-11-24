#include<iostream>
#include<math.h>
using namespace std;
long long int fact(int r){
  long long int ans=1;
  for(int i=1;i<=r;i++){
    ans*=i;
  }
  return ans;
}
long long int nCr(int n,int r){
  //nCi=fact(n)/(fact(n-i)fact(i))
  return fact(n)/(fact(n-r)*fact(r));
}
/*int main(){
  cout<<fact(2)<< " "<<nCr(2,1);
}*/ 

int main(){

  long long int a,b,n;
  cout<<"Enter the value of a,b and n for (a+bx)^n"<<endl;
  cin>>a>>b>>n;
  for (long long int r=0;r<=n;r++){
    //term = nCra^(n-r)b^r
    cout<<nCr(n,r)*(long long int)pow(a,(n-r))*(long long int)pow(b,r)<<"x^"<<r<<" + ";
  }
  cout<<"\b\b\b   "<<endl;

  return 0;
  }

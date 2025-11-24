#include<iostream>
using namespace std;

void stan(){
  float a,n;
  cout<<"Enter a,n for ax^n"<<endl;
  cin>>a>>n;
  if(n==0 || a==0){
    cout<<"0"<<endl;
  }else{
    cout<<a*n<<"x^"<<n-1<<endl;
  }
}
void log(){
  float a,b,n;
  cout<<"Enter a,b,n for alog(bx^n)"<<endl;
  cin>>a>>b>>n;
  if(a==0 || b==0 || n==0){
    cout<<"0"<<endl;
  }else{
    cout<<a*b*n<<"/x"<<endl;
  }

}
void cos(){
  float a,b,n;
  cout<<"Enter a,b,n for acos(bx^n)"<<endl;
  cin>>a>>b>>n;
  if(a==0 || b==0 || n==0){
    cout<<"0"<<endl;
  }else{
    cout<<a*b*n<<"x^"<<n-1<<"sin("<<b<<"x^"<<n<<")"<<endl;
  }
}

int main(){
  int choice;
  cout<<"1 : ax^n"<<endl;
  cout<<"2 : alog(bx^n)"<<endl;
  cout<<"3 : acos(bx^n)"<<endl;
  cin>>choice;
  switch (choice){
    case 1:
      stan();
      break;
    case 2:
      log();
      break;
    case 3:
      cos();
      break;
    default:
      cout<<"kys retard"<<endl;
  }

  return 0;
}

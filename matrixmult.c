#include<stdio.h>

void accept(int A[10][10],int r , int c){
  int i,j;
  printf("Enter elements for matrix ");
  for(i=0;i<r;i++){
    for(j=0;j<c;j++){
      scanf("%d",&A[i][j]);
    }
  }
}

void display(int A[10][10],int r , int c){
  int i,j;
  for(i=0;i<r;i++){
    for(j=0;j<c;j++){
      printf("%5d",A[i][j]);
    }
    printf("\n");
  }
}



void multiply(int A[10][10],int B[10][10],int C[10][10],int r1,int c1,int r2,int c2){
    int i,j,k;
    if(c1!=r2){
        return ;
      }
    for(i=0;i<r1;i++){
      for(j=0;j<c2;j++){
        C[i][j]=0;
        for(k=0;k<c1;k++){
          C[i][j]+=A[i][k]*B[k][j];
        }
      }
    }
  }
int main(){
  int A[10][10],B[10][10],C[10][10],r1,r2,c1,c2;

  printf("Enter r,c for 1\n");
  scanf("%d%d",&r1,&c1);
  accept(A,r1,c1);
  printf("Enter r,c for 2\n");
  scanf("%d%d",&r2,&c2);
  accept(B,r2,c2);
  multiply(A,B,C,r1,c1,r2,c2);
  if(c1!=r2){
    printf("bruh moment\n");
    return -1;
  }
  display(C,r2,c1);
  return 0;

}

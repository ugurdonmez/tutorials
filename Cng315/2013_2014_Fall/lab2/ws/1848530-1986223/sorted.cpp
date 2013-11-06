#include <fstream>
#include <iostream>
using namespace std;

int BinarySearch (int *A,int n,int y){
  int mid, Lb = 0,Ub= n-1;
  while(Lb<=Ub){
    mid =(Lb+Ub)/2;
    if(y>A[mid])
      Lb=mid+1;
    else if(y<A[mid])
      Ub=mid-1;
    else
      return mid;
  }
  return 0;
}

int main() {
  ifstream fin("sorted.txt");
  ofstream fout("output.txt");
  int n,k,t,j=0;
  fin>>n>>k;

  int A[n];
  int B[n] ;
 
  for (int i=0; i < n ; i++){
    fin>>A[i];
    B[i] = -1;
  }
  for(int i =0 ;i < n;i++) {
        t = BinarySearch(A,n, k-A[i]);
        if(t >= 1 && A[i] < A[t]) 
          fout<<A[i]<<" "<< A[t] << endl;
      }
  return 0;
}

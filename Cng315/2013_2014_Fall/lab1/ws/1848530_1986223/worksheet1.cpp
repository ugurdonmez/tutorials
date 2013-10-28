#include <fstream>
#include <iostream>
using namespace std;

void Selection_Sort(int *A, int n, int k){
  int temp;
  for (int i=0;i<k;i++)        {
    for(int j=i;j<n;j++)
      if(A[i]>A[j]) {
        temp=A[i];
        A[i]=A[j];
        A[j]=temp;
      }
  }
} // END selection

void Bubble_Sort(int *A, int n, int k) {
  int temp;
  for (int i=n-1; i >=k-1 ; i--) {
    for(int j=0; j< i; j++)
      if (A[j]>A[j+1]) {
        temp=A[j];
        A[j]=A[j+1];
        A[j+1] = temp;
      }
  }

} // END BUBBLE
int main() {
  ifstream fin("input.txt");
  ofstream fout("output.txt");
  int n,k;
  fin>>n>>k;

  int A[n];
  for (int i=0; i < n ; i++)
    fin>>A[i];
  if ( k <= n/2){

    Selection_Sort(A, n,k);
    cout<<"Selection Sort Started: "<< endl;}
  else {
    Bubble_Sort(A,n ,k);
    cout<<"Buble Sort Started: "<< endl;
  }


  fout<<A[k-1]<< endl;

  return 0;
}

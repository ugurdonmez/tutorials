#include <fstream>
#include <iostream>
using namespace std;

int main() {
  ifstream fin("unsorted.txt");
  ofstream fout("output.txt");
  int n,k;
  fin>>n>>k;

  int A[n];
  for (int i=0; i < n ; i++)
    fin>>A[i];
  for (int i=0;i<n;i++) {
    for(int j=i+1;j<n;j++)
      if((A[i]+A[j]) == k) 
        fout<<A[i]<<" "<< A[j]<< endl;
  }

  return 0;
}

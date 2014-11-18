// ConsoleApplication2.cpp : Defines the entry point for the console application.
//


#include <cstdlib>
#include <iostream>
#include <string>


using namespace std;
	
int const myStringSize=10;	
int const ListSize=1000;
int const AuxListSize=28;
	

char myString[myStringSize];	

string  A[ListSize];
string  B[ListSize];
int C[AuxListSize];


void countingSort(int n,int r, int k,int l)
{
	string  B[ListSize];
	
	for (int i = 0; i < r; i++)
	{
		C[i]=0;
	}
	
	for (int j = 0; j < n; j++)
	{
		C[A[j][l] - 'A']++;
	}

	
	for (int i = 1; i < r; i++)
	{
		C[i]=C[i]+C[i-1];
	}

	for (int i = 0; i < r; i++)
	{
		if (C[i]>0)
			C[i]--;
		
	}

	
	
	for (int j = n-1; j >= 0; j--)
	{
		
		for (int i = 0; i < k; i++)
		{
			B[C[A[j][l] - 'A']]=B[C[A[j][l] - 'A']]+ A[j][i];
		}
			
		
		C[A[j][l] - 'A']--;
	}

	for (int i = 0; i < n; i++)
	{
		A[i]=B[i];
	}



}


void radixSort(int n , int r , int k)
{
	for (int i = k-1; i >= 0; i--)
	{
		countingSort(n,r,k,i);
	}


}
int main()
{
	int n;


	int k;

	
	int r;





	cin>>n;
	
	cin>>k;
	
	cin>>r;
	

	for (int i = 0; i < n; i++)
	{
		
		
		cin>>A[i];
		
	}



	radixSort(n,r,k);



	cout<<endl;

	
	for (int i = 0; i < n; i++)
	{
		cout<<A[i]<<"\n";
	}




	system("PAUSE");

	return 0;
}


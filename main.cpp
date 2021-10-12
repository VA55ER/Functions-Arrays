#include<iostream>
using namespace std;

void FillRand(int arr[], const unsigned int n);
void Print(int arr[], const unsigned int n);

void main()
{
	setlocale(LC_ALL, "Russian");
	const unsigned int n = 5;

}

void FillRand(int arr[], const unsigned int n)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand();	
	}
}

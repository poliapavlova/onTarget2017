#ifndef FUNCTIONS_H
#define FUNCTIONS_H
#include<iostream>
using std::cout;
using std::endl;
#include<string>
using std::string;

//1
const string Currency(string& currency, double amount);

//2.1
template <typename T> void printArray ( T array , int size)
{
	cout << "Array : [ ";
	for ( int i = 0 ; i < size ; i++)
	{
		cout << array[i] << " ";
	}
	cout << "]";
	cout << endl;
}
//2.2
template <typename T> void printMatrix (T** matrix , int row , int column)
{
	cout << "Matrix : " << endl;
	for (int i = 0 ; i < row ; i++)
	{
		for ( int j = 0 ; j < column ; j++)
		{
			cout << "\t" << matrix[i][j] << "\t";

		}
		cout << endl;
	}
}

//3






#endif

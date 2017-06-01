#include "functions.h"
#include <iostream>
#include <iomanip>
using namespace std;

const string Currency(string& currency, double amount)
{
	stringstream res;
	string results;

	res << fixed <<setprecision(6) << amount;
	results.append(currency);
	results.append(" ")
	res >> results;

	return results;

}

int main() {
	int array[] = {1,2,3,4,5,6,7,8,9,10,11,12};
	printArray(array, 9);
	cout << endl;
	int row;
	int column;
	cout << " ROW : ";
	cin>>row;
	cout << " COLUMN : ";
	cin>>column;

	int **matrix  = new int* [row];
	for(int i =0 ; i < row ; i++)
	{
		matrix[i] = new int [column];
	}



	for (int i = 0 ; i < row ; i ++)
	{
		for ( int j = 0 ; j < column ; j++)
		{
			cout << "matrix["<<i<<"]["<<j<< "]= ";
			cin >>matrix[i][j];
		}
	}

	printMatrix(matrix,row,column);

	for ( int i = 0 ; i < row ; i++)
	{
		delete [] matrix[row];
	}
	delete [] matrix;
	matrix = NULL;




	return 0;
}

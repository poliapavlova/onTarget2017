//============================================================================
// Name        : 2017.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================
#include<vector>
#include <iostream>
using namespace std;

int main()
{
	int numbers [] =  {1,2,3,4,5,6,7,8,3,3,4,5,6,7,8,7};
	vector<int> sNumbers (numbers, numbers+sizeof(numbers)/sizeof(int));
	vector<int> vSubseq;
	vector<int> vMaxSubseq;

	for(unsigned int i = 1 ; i < sNumbers.size() ; i++)
	{
		if( sNumbers[i-1] < sNumbers[i])
		{
			if ( vSubseq.empty())
			{
				vSubseq.push_back(sNumbers[i-1]);
			}
				vSubseq.push_back(sNumbers[i]);
				if(vSubseq.size() >= vMaxSubseq.size())
						vMaxSubseq=vSubseq;
		}
		else
		{
			if (vSubseq.size() >= vMaxSubseq.size())
				{
					vMaxSubseq=vSubseq;
					vSubseq.clear();
				}
		}
	}
	cout << "vMaxSubseq" << endl;
	for (unsigned int i = 0 ; i < vMaxSubseq.size() ; i++)
	{
		cout << vMaxSubseq[i] << " ";
	}


	return 0;
}

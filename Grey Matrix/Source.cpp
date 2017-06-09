
#include<iostream>
#include<iomanip>
#include<conio.h>
#include<map>
#include<math.h>
#include "Source.h"
using namespace std;
 
void main()
{
	std::cout << "Enter Nuber of Inputs:" << endl;
	int ip;
	cin >> ip;
	cout << "Enter Number of Outputs" << endl;
	int op;
	cin >> op;
	
	int p = pow(2, ip);

	
	map<int,bool*> io;

	
	
	for (int i = 0x00; i < p; i++)
	{
		bool *bino = new bool[op];
		io[i] = bino;
		cout << "Enter value of output for" << i << ":" << endl;
		for (int j=0;j<op;j++)
		{
			bool a;
			cin >> a;
			*bino = a;
			bino++;
		}
	
	}
	bool *r;
	r = (io[0x00]);
	for (int i = 0; i < op; i++)
	{
		cout << *r << endl; r++;
	}
	system("pause");
}
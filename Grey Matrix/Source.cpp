
#include<iostream>
#include<iomanip>
#include<conio.h>
#include<map>
#include<math.h>
using namespace std;
 
void main()
{
	std::cout << "Enter Nuber of Inputs:" << endl;
	int ip;
	cin >> ip;
	cout << "Enter Number of Outputs" << endl;
	int op;
	cin >> op;
	int a = 0x00;
	int p = pow(2, ip);

	bool bino = new bool[op];
	map<int, bool> io;
	bool temp = new bool[op];

	for (int i = 0x00; i < p; i++)
	{
		
		cout << "Enter value of output for" << i << ":" << endl;
		for (int j=0;j<op;j++)
		{
			
			cin >> temp;
			temp++;
			
		}
		bino = temp;
		
		io[i] = bino;
	}
}
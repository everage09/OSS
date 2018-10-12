#include<iostream>

using namespace std;

int main()
{
	cout << "구구단 1-8 -> 1-9" << endl;
	for (int i = 1; i < 10; i++)
	{

		for (int j = 1; j < 10; j++)
		{
			cout << i<< " * " << j << " = "<< i * j << endl;

		}
		cout << endl;
	}
	cout << endl;
	cout << "끝" << endl;







	system("pause");


}
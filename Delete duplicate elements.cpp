#include <iostream>
using namespace std;

int main(){
	double arr[10];
	double arr2[10];
	bool flag = false;
	int k = 0;
	cout << "Input array: ";
	for (int i = 0; i < 10; i++)
	{
		cin >> arr[i];
	}
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			if (arr[i] == arr[j] && i!=j)
			{
				flag = true;
				break;
			}
		}
		if (flag != true)
		{
			arr2[k] = arr[i];
			k++;
		}
		flag = false;
	}
	cout << "Array after duplicate removal: \n";
	for (int i = 0; i < k; i++)
	{
		cout << arr2[i] <<"\t";
	}
	cout << endl;
	return 0;
}

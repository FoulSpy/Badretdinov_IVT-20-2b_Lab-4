#include<iostream>
using namespace std;

int main()
{
	int k, j, temp, i, f = 0;
	int arr[10]{ 6,7,4,1,8,3,2,5,3,9 };

	setlocale(LC_ALL, "rus");

	cout << "� ������ ��������" << endl;
	cin >> j;
	cout << "������ ���������� � " << j << " �������� � �� " << j + 1 << endl;

	//����� ������� � ��������
	for (int i = j; i >= 0; i--)
	{
		cout << arr[i] << " ";
	}
	for (int i = 10 - 1; i > j; i--)
	{
		cout << arr[i] << " ";
	}

	//����������
	for (int i = 0; i < 10 - 1; i++)
	{
		for (int f = 0; f < 10 - i - 1; f++)
		{
			if (arr[f] < arr[f + 1])
			{
				temp = arr[f];
				arr[f] = arr[f + 1];
				arr[f + 1] = temp;
			}
		}
	}

	cout << endl << "���������������� ������ ��� �������� ��������� � " << j << " �������� �� " << j + 1 << " �������� " << endl;

	//����� ������� � �������� � ��� ��������
	for (int i = j; i >= 0; i--)
	{
		if (arr[i] % 2 == 0)
		{
			cout << arr[i] << " ";
		}
	}
	for (int i = 10 - 1; i > j; i--)
	{
		if (arr[i] % 2 == 0)
		{
			cout << arr[i] << " ";
		}
	}
	return 0;
}
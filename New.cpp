#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <fstream> 
#include <iostream> 
#include <conio.h>
#include <queue>
using namespace std;
int main()
{
	queue<int> que1;
	queue<int> que2;
	queue<int> que3;
	int p1 = 0;
	int p2 = 0;
	int variant = 0;
	int x = 0;
	int s = 0;
	setlocale(LC_ALL, "Russian");
	while (s == 0)
	{
		cout << "������� \n 1. ����� ������ ������� � ������ ������� \n 2. ����� ������ ������� �� ������ ������� \n 3. ����� ���������� ������� �� ������ ������� \n 4. ����� ���������� ������� �� ������ ������� \n 5. ����� �������� �������� ������ ������� \n 6. ����� �������� �������� ������ ������� \n 7. ������� \n 8. ����� \n 9. ��� ������ �������� " << endl;
		cin >> variant;
		switch (variant)
		{
		case 1:
			system("cls");
			cout << "������� �����" << endl;
			cin >> p1;
			que1.push(p1);
			break;

		case 2:
			system("cls");
			cout << "������� �����" << endl;
			cin >> p2;
			que2.push(p2);
			break;

		case 3:
			system("cls");
			if (que1.empty() == true)
			{
				cout << "������� �����" << endl;
			}
			else
			{
					que1.pop();
			}
			break;

		case 4:
			system("cls");
			if (que2.empty() == true)
			{
				cout << "������� �����" << endl;
			}
			else
			{
					que2.pop();
			}
			break;
		case 5:
			system("cls");
			if (que1.empty() == true)
			{
				cout << "������ ������� �����" << endl;
			}
			else
			{	
				cout << "�������� ������ �������" << endl;
				que3 = que1;
				while (!que3.empty())
				{
					cout << que3.front() << " ";
					que3.pop();
				}
				cout << endl;
			}
			break;
		case 6:
			system("cls");
			if (que2.empty() == true)
			{
			cout << "������ ������� �����" << endl;
			}
			else
			{
			que3 = que2;
			cout << "�������� ������ �������" << endl;
			while (!que3.empty())
			{
				cout << que3.front() << " ";
				que3.pop();
			}
			cout << endl;
		break;
		case 7:
			cout << "������� ��������� ������?" << endl;
			cin >> x;
			if (x < que1.size())
			{

				for (int i = 0; i < x; i++)
					que1.pop();
				while (!que2.empty())
				{
					que1.push(que2.front());
					que2.pop();
				}
			}
			else
				cout << "������" << endl;
			break;

		case 8:
			s = 1;
			break;

		case 9:
			system("cls");
			if (que1.empty() == true)
			{
				cout << "������ ������� �����" << endl;
			}
			else
			{
				cout << "�������� ������ �������" << endl;
				que3 = que1;
				while (!que3.empty())
				{
					cout << que3.front() << " ";
					que3.pop();
				}
				cout << endl;
			}
			if (que2.empty() == true)
			{
				cout << "������ ������� �����" << endl;
			}
			else
			{
				cout << "�������� ������ �������" << endl;
				que3 = que2;
				while (!que3.empty())
				{
					cout << que3.front() << " ";
					que3.pop();
				}
				cout << endl;
			}
			break;
		default:
		{
				   cout << "������" << endl;
				   break;
		}
		}
		}
	}
	cout<< "��������� ���������. ��������� ��������" << endl;
}
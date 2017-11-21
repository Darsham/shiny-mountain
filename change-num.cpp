#include<iostream>
#include<string>
#include<stack>
#include<algorithm>
using namespace std;
stack <char> p;

int N = 0;
int a[50];




int main()
{
	cin >> N;


	for (int i = 0; i < N; i++)
	{
		cin >> a[i];
	}

	for (int i = 0; i < N; i++)
	{
		while (a[i] % 2 == 0)
		{
			a[i] = a[i] / 2;
		}
	}
	int ans = 1;
	for (int i = 1; i < N; i++)
	{
		if (a[i] != a[i - 1])
		{
			ans = ans * 0;
		}
	}
	
	if (ans)
	{
		cout << "YES";
	}
	else
	{
		cout << "NO";
	}

	

	system("pause");



	return 0;
}

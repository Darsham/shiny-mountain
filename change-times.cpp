#include<iostream>
#include<string>
using namespace std;

int n = 0;




int main()
{
	cin >> n;
	
	int ans = 0;
	int temp = n;
	
	int time = 0;
	
	while (temp>9)
	{
		int p = 1;
		int t = temp;
		while (t)
		{
			p = p*(t % 10);
			t = t / 10;
		}

		temp = p;
		time++;
	}

	cout << time;

	system("pause");



	return 0;
}



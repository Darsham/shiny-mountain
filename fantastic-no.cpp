#include<iostream>
#include<string>
#include<stack>
#include<algorithm>
#include<hash>
using namespace std;
stack <char> p;

int n = 0 ,m = 0;





bool isfantcy(int b)
{
	int a[10];
	for (int i = 0; i < 10; i++)
	{
		a[i] = 0;

	}
	int tmp = b;
	while (tmp)
	{
		a[tmp % 10]++;
		tmp = tmp / 10;
	}



	int flag1 = 0, flag3 = 0, flag7 = 0, flag9 = 0;

	if (a[1])
	{
		a[1]--;
		if (a[1] || a[3] || a[4] || a[6] || a[7])
		{
			flag1 = 1;
	
		}
		a[1]++;
	}
	if (a[3])
	{
		a[3]--;
		if (a[1] || a[2] || a[4] || a[5] || a[7] || a[8])
		{
			flag3 = 1;

		}
		a[3]++;
	}

	if (a[7])
	{
		a[7]--;
		if (a[1] || a[3] || a[4] || a[6] || a[9])
		{
			flag7 = 1;

		}
		a[7]++;
	}
	if (a[9])
	{
		a[9]--;
		if (a[1] || a[2] || a[5] || a[7] || a[8])
		{
			flag9 = 1;

		}
		a[9]++;
	}

	if (flag1 || flag3 || flag7 || flag9)
	{
		return true;
	}
	else
	{
		return false;
	}
	


}

bool ispre(int a)
{
	if (a % 2 == 0)
		return false;
	else
	{
		int flag = 1;
		for (int i = 3; i*i <= a; i++)
		{
			if (a%i == 0)
				flag = flag * 0;
		}

		if (flag)
			return true;
		else
			return false;
	}
}

int main()
{
	cin >> n;

	cin >> m;
	int ans = 0;
	for (int i = n; i < (m + 1); i++)
	{
		if (isfantcy(i))
			ans++;
	}

	cout << ans;

	system("pause");



	return 0;
}

class Solution {
public:
	int climbStairs(int n) {
		clmb(n);
	}

	int clmb(int a)
	{
		if (a = 1)
		{
			return 1;
		}
		if (a = 2)
		{
			return 2;
		}
		if (a>2)
		{
			return clmb(a - 1) + clmb(a - 2);
		}
	}

};

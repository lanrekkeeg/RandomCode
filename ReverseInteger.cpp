void reverse(int x) {

	int mul = 1;
	if (x < 0) {
		mul = -1;
		x *= mul;
	}
	long long rev = 0;
	while (x != 0) {
		int rem = x % 10;
		x = x / 10;
		rev *= 10 + rem;	
	}
	if ((rev*mul)> INT32_MAX) {
		cout << " Max overflow";
	}
	else if ((rev*mul) < INT32_MIN)
	{
		cout << "Min overflow";
	}
	cout << rev*mul;
}
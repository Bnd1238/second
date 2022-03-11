#include "kalc.h"
int main()
{
	/*int a, b;
	cin >> a >> b;*/

	/*cout << calc(&pls, a, b)<<endl;
	cout << calc(&mnus, a, b) << endl;
	cout << calc(&m, a, b) << endl;
	cout << calc(&d, a, b) << endl;
	cout << calc(&mult, a, b) << endl;*/
	int n;
	cin >> n;

	vector<int>vec(n);
	for (int i = 0; i < n; ++i)
	{
		vec[i] = rand() % 101 - 50;
	}
	for (int i = 0; i < n; ++i)
	{
		cout << vec[i] << " ";
	}






	cout << endl;
	print(check(vec), vec);
	return 0;
}

#include <iostream>
#include <iomanip>
using namespace std;

int main(int argc, char const *argv[])
{
	int n;
	cin>>n;
	long double sum = 0;

	for (int i = 1; i <= n; ++i)
	{
		sum += 1.0/(i * i);
	}
	cout<<setiosflags(ios::fixed)<<setprecision(5)<<sum<<endl;
	return 0;
}

#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
	int n;
	cin>>n;
	double sum = 0;

	for (int i = 1; i <= n; ++i)
	{
		sum += 1.0/(i * i);
	}
	cout<<--n<<endl;
	return 0;
}

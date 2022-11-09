#include <iostream>
#include <cmath>
using namespace std;
double s(const double x);
int main()
{
	double gp, gk, z;
	int n;

	cout << "gp = "; cin >> gp;
	cout << "gk = "; cin >> gk;
	cout << "n = "; cin >> n;

	double dg = (gk - gp) / n;
	double t = gp;
	while (t <= gk)
	{
		z = s(2 * t + 1) - 2 * s(t * t) + sqrt(s(1));
		cout << t << " " << z << endl;
		t += dg;
	}
	return 0;
}
double s(const double x)
{
	if (fabs(x) >= 1)
		return (cos(x) * cos(x) + 1) / exp(x);
	else
	{
		double S = 0;
		int k = 0;
		double a = 1;
		S = a;
		do
		{
			k++;
			double R = (2 * x)/(((2 * k + 1) - 2) * ((2 * k + 1) - 1) * 2 * k + 1);
			a *= R;
			S += a;
		} while (k < 4);
		return S;
	}
}
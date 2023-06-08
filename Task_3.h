#pragma once
using namespace std;

void Task3()
{
	double N = 0;
	cout << "\n\n\tEnter: N = "; cin >> N;

	double E = 0;
	for (double k = N; k < 19; k++)
	{
		E += sqrt(pow(sin(k), 2) + pow(cos(N / k), 2));
		N++;
	}

	cout << "\n\n\tE = " << E;
}
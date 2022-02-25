// A. Appleman and Toastman.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>
#include <iomanip>
#include<string>
#include <cmath>
#include<algorithm>
#include<vector>
#include<deque>
#include<set>
#include<map>
#include<bitset>
#include<numeric>
using namespace std;
int main()
{
	long long t, sum, score = 0;
	cin >> t;
	vector<long long>v(t);
	for (int i = 0; i < t; i++) {
		cin >> v[i];
	}
	sort(v.begin(), v.end());
	for (int i = 0; i < v.size(); i++) {
		if (i == v.size() - 1) {
			score += v[i] * (i + 1);
		}
		else {
			score += v[i] * (i + 2);
		}


	}
	cout << score << endl;
}
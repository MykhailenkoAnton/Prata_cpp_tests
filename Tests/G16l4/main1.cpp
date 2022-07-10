#include <iostream>
#include <algorithm>
#include <vector>
int reduce(long ar[], int n);
const int SIZE = 10;
int main()
{
	long MyArr[SIZE];
	for (int i = 0; i < SIZE; i++)
	{
		MyArr[i] = rand() % 5 + 1;
	}
	int last = reduce(MyArr, SIZE);
	std::cout << "Arr has " << last << " elements\n";
	return 0;
}

int reduce(long ar[], int n)
{
	std::vector<long> newV(ar, ar + n);
	std::sort(newV.begin(), newV.end());

	auto last = std::unique(newV.begin(), newV.end());

	newV.erase(last, newV.end());

	int num = newV.size();

	return num;
}
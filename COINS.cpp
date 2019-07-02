#include<iostream>
#include<bits/stdc++.h>
using namespace std;
long max(long a, long b)
{	return a > b ? a : b;
}

int main()
{	long maxVal[1000000001];
	int i, num;
	maxVal[0] = 0;
	for(i=1 ; i<=1000000000 ; i++)
		maxVal[i] = max(i, maxVal[i/2] + maxVal[i/3] + maxVal[i/4]);
	while(scanf("%d", &num) != EOF)
		printf("%ld\n", maxVal[num]);
	return 0;
}

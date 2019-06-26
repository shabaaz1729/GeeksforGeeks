#include<iostream>
#include<unordered_map>

using namespace std;

//this funtion returns number of sub arrays with sum k

int numOfSubArrays(int ar[],int n,int k)
{
	int curSum = 0, count = 0;
	unordered_map<int> prevSum ;
	for(int i=0;i<n;i++)
	{
		curSum += ar[i++];
		if(curSum == k)
			count++;

		//if prevSum[someContinuousSum] + k == curSum then there is a sub array with given sum k
		
		if(prevSum.find(curSum-k) != prevSum.end())
			count += prevSum[curSum-k];

		prevSum[curSum]++;
	}
}
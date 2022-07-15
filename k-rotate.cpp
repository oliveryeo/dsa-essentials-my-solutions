
#include<bits/stdc++.h>
using namespace std;


int main(){
	// your code goes here
    int x = 54;

    vector<int> arr = {10, 22, 28, 29, 30, 40};

    pair<int, int> test;

    test = closestSum(arr, x);
    
    cout << test.first << " and " << test.second << endl;

	return 0;
}

#include<bits/stdc++.h>
using namespace std;

pair<int, int> closestSum(vector<int> arr, int x){

    pair<int, int> pair1;
    int sum;
    int n = arr.size(); // number of elements
    int difference = INT_MAX; // Start with highest difference.


    for (int i=0; i<n; i++){

        for (int j=i+1; j<n; j++){
            
            sum = arr[i] + arr[j];

            // Logic for exact sum
            if (sum == x){ // If its an exact sum, assign pair1.first to arr[i], pair1.second to arr[j] and break loop.
                pair1.first = arr[i];
                pair1.second = arr[j];
                break;
            }

            // Logic for those sums which are not exactly x.
            // Maybe can create a counter that keeps track which pair has the closest difference to x.
            else if (abs(x - sum) < difference){ // Find the smallest difference and use those respective elements as pairs.
                difference = abs(x - sum);
                cout << difference << endl;
                pair1.first = arr[i];
                pair1.second = arr[j];
            }
            
        }
    }

    return pair1;
}



int main(){
	// your code goes here
    int x = 54;

    vector<int> arr = {10, 22, 28, 29, 30, 40};

    pair<int, int> test;

    test = closestSum(arr, x);
    
    cout << test.first << " and " << test.second << endl;

	return 0;
}
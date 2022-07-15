#include <bits/stdc++.h>
using namespace std;

int largestElement(vector<int> arr) {
    
     int largest = INT_MIN; // Takes into account negative numbers!
     
     for(int i=0; i < arr.size(); i++) {
         if(largest < arr[i]){
             largest = arr[i];
         }
     }
     
     return largest;
}

int main() {
	// your code goes here
    int largest;

    vector<int> arr = {-3,4,1,2,3};
    largest = largestElement(arr);

    cout << largest << endl;

	return 0;
}


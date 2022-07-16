#include<bits/stdc++.h>
using namespace std;

vector<int> optimizedBubbleSort(vector<int> v){
    
    int n = v.size(); // No. of elements in the vector

    // Recall n-1 is the last index of the vector

    for (int times=1; times <= n-1; times++){

        int swap_count = 0; // Indicates if a swap was done.

        for (int i=0; i <= n-1-times; i++){ // n-1-times to get the last second index of the respective vector range to swap.
            if (v[i] > v[i+1]){
                swap(v[i], v[i+1]);
                swap_count++;
            } 
            else if (swap_count != 0) { // If there is no swap happening, means everything is sorted. Break the loop.
                break;
            }
        }
    }

    return v;
}
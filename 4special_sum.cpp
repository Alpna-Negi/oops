/*Q4. You are given an array of elements. Now you need to choose the best index of this array.
 An index of the array is called best if the special sum of this is maximum across the special sum of all the other indices.
 To calculate the special sum for any index you pick the first element that is and add it to your sum. Now you pick next two elements i.e.,
and and add both of them to your sum. Now you will pick the next elements, 
and this continues till the index for which it is possible to pick the elements. 
Find the best index and in the output print its corresponding special sum. 
Note that there may be more than one best index, but you need to only print the maximum special sum.*/

#include<iostream>
#include<stdlib.h>
#include <iostream>
#include <vector>
using namespace std;

int calculateSpecialSum(const vector<int>& arr, int start) {
    int sum = 0;
    int n = arr.size();
    int count = 1;
    int index = start;

    while (index < n) {
        for (int i = 0; i < count && index < n; i++) {
            sum += arr[index];
            index++;
        }
        count++;
    }
    
    return sum;
}

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int maxSpecialSum = INT_MIN;

    for (int i = 0; i < n; i++) {
        int specialSum = calculateSpecialSum(arr, i);
        maxSpecialSum = max(maxSpecialSum, specialSum);
    }
    cout << maxSpecialSum << endl;
    return 0;
}

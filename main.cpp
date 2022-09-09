#include <iostream>
#include <vector>
using namespace std;

// O(1) time | O(1) space
void swap(vector<int> &array, int i , int j) {
    int temp = array[i];
    array[i] = array[j];
    array[j] = temp;
}

// AVERAGE: O(n^2) time | O(1) space
// BEST: O(n) time | O(1) space
// WORST: O(n^2) time | O(1) space
vector<int>bubbleSort(vector<int> array) {
    if(array.empty()) {
        return array;
    }
    bool sorted = false;
    int numberOfElementsSorted = 0;
    while(!sorted) {// O(n) time
        sorted = true;
        for(int i = 0; i < array.size() - 1 - numberOfElementsSorted; i++) {// O(n) time NESTED
            if(array[i] > array[i + 1]) {
                swap(array, i, i + 1);// O(1) time | O(1) space
                sorted = false;
            }
        }
        numberOfElementsSorted++;
    }
    return array;
}

int main() {
    vector<int> input = {-4, 5, 10, 8, -10, -6, -4, -2, -5, 3, 5, -4, -5, -1, 1, 6, -7, -6, -7, 8};
    for(int element : input) {
        cout << element << " ";
    }
    cout << endl;
    vector<int> sorted = bubbleSort(input);
    for(int element : sorted) {
        cout << element << " ";
    }
    return 0;
}

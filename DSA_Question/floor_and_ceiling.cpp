#include<iostream>
using namespace std;

int main() {
    int arr[] = {3, 4, 4, 7, 8, 10};
    int n = 6, x = 5;
    FloorCeilFinder finder;
    pair<int, int> ans = finder.getFloorAndCeil(arr, n, x);
    cout << "The floor and ceil are: " << ans.first << " " << ans.second << endl;
    return 0;
}
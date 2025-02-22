#include <iostream>
#include <vector>

using namespace std;

// vector<int> getFloorAndCeil(int x, vector<int> &arr) {
//     int left = arr[0];
//     int right = arr[arr.size() - 1];
//     int floor = -1;
//     int ceil = -1;
    
//     while (right>=left){

//         int mid = (left + right)/2;

//         if (arr[mid] == x) {
//             floor = mid;
//             ceil = mid;
//         }

//         if (arr[mid] < x) {
//             floor = mid;
//             left = mid + 1;
//         }

//         else {
//             ceil = mid;
//             right = mid - 1;
//         }
        
//     }

//     vector <int> result;
//     result.push_back(arr[floor]);
//     result.push_back(arr[ceil]);

//     return result;
// }

vector<int> getFloorAndCeil(int x, vector<int> &arr) {

    int floor = -1;
    int ceil = INT_MAX;

    for (int i = 0; i<arr.size(); i++){
        
        if (arr[i] == x) {
            ceil = arr[i];
            floor = arr[i];
            break;
        }

        else if (arr[i] > x) {
            ceil = min (ceil, arr[i]);
        }

        else {
            floor = max(floor, arr[i]);
        }
    }

    if (ceil == INT_MAX){
        ceil = -1;
    }


    vector <int> result;
    result.push_back(floor);
    result.push_back(ceil);

    return result;
}
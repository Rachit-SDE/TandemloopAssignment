#include <iostream>
#include <vector>
#include <map>
using namespace std;

int main() {
    vector<int> nums = {1,2,8,9,12,46,76,82,15,20,30};
    map<int, int> counts;
    for (int i = 1; i <= 9; ++i) counts[i] = 0;
    for (int n : nums) {
        for (int i = 1; i <= 9; ++i) {
            if (n % i == 0) counts[i]++;
        }
    }
    cout << "{";
    for (int i = 1; i <= 9; ++i) {
        cout << i << ": " << counts[i];
        if (i != 9) cout << ", ";
    }
    cout << "}" << endl;
    return 0;
}

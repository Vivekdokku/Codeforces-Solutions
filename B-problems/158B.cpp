#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    vector<int> count(5, 0);  // Count array to store the number of groups of each size (1 to 4)
    
    for (int i = 0; i < n; i++) {
        int group_size;
        cin >> group_size;
        count[group_size]++;
    }
    
    int taxis = 0;
    
    // Groups of size 4
    taxis += count[4];
    
    // Groups of size 3 can take groups of size 1 with them
    taxis += count[3];
    count[1] = max(0, count[1] - count[3]);
    
    // Groups of size 2 can pair up
    taxis += count[2] / 2;
    if (count[2] % 2 == 1) {
        taxis++;  // Add one more taxi for the remaining group of size 2
        count[1] = max(0, count[1] - 2);  // It can take two size 1 groups with it
    }
    
    // Remaining groups of size 1
    taxis += (count[1] + 3) / 4;  // Each taxi can take up to 4 groups of size 1
    
    cout << taxis << endl;
    
    return 0;
}

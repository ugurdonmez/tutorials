#include <iostream>

using namespace std;

int main() {

    int height[10001] = {0};
    int left, right, buildingHeight;

    cout << "ugur" << endl;
    
    while (cin >> left >> buildingHeight >> right) {
        for (int i = left; i < right; ++i) {
            if (buildingHeight > height[i])
                height[i] = buildingHeight;
        }
    }

    bool notFirst = false;
    int currentHeight = 0;
    for (int pos = 0; pos != 10000; ++pos) {
        if (height[pos] != currentHeight) {
            if (notFirst)
                cout << ' ';
            else notFirst = true;
            cout << pos << ' ' << height[pos];
            currentHeight = height[pos];
        }
    }
    cout << endl;
    return 0;

}

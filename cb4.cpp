#include <iostream>
using namespace std;

bool checkSplitSequence(int n) {
    int prev, curr;
    bool decreasing = true;
    
    // Input first integer
    cin >> prev;

    for (int i = 1; i < n; ++i) {
        cin >> curr;

        if (decreasing) {
            if (curr >= prev) {
                decreasing = false;
            }
        } 
        else {
            if (curr <= prev) {
                return false;
            }
        }

        prev = curr;
    }

    return true;
}

int main() {
    int N;
   
    cin >> N;

    bool result = checkSplitSequence(N);

    if (result) {
        cout << "true\n";
    } else {
        cout << "false\n";
    }

    return 0;
}


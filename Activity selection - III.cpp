#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct Activity {
    int start, finish;
};

bool compare(Activity a, Activity b) {
    return a.finish < b.finish;
}

void printMaxActivities(vector<Activity> arr) {
    sort(arr.begin(), arr.end(), compare);

    cout << "Selected activities are:\n";

    int lastFinish = -1;

    for (int i = 0; i < arr.size(); i++) {
        if (arr[i].start >= lastFinish) {
            cout << "(" << arr[i].start << ", "
                 << arr[i].finish << ")\n";

            lastFinish = arr[i].finish;
        }
    }
}

int main() {
    vector<Activity> arr = {
        {1, 3},
        {2, 5},
        {0, 6},
        {5, 7},
        {8, 9},
        {5, 9}
    };

    printMaxActivities(arr);

    return 0;
}

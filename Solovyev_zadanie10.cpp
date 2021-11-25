#include <iostream>

using namespace std;

int main() {

    int N;

    cin >> N;

    int* arr = new int[N];

    int sum = 0;

    for (int i = 1; i <= N; ++i) {

        cin >> arr[i - 1];

        sum += arr[i - 1];

    }

    int count = 0;

    for (int i = 0; i < N; ++i) {

        if (arr[i] < (sum / N))

            ++count;

    }

    cout << count;

}
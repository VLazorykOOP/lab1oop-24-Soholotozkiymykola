#include <iostream>

using namespace std;

void buildArrayC(const int A[], int C[], int N) {
    for (int i = 0; i < N; ++i) {
        C[i] = 2 * A[i];
    }
}

int findLastMaxIndex(const int A[], int N, int c, int d) {
    int lastMaxIndex = -1;
    int maxElement = INT_MIN;
    for (int i = 0; i < N; ++i) {
        if (A[i] % 2 == 0)
            break;
        if (A[i] >= c && A[i] <= d) {
            if (A[i] >= maxElement) {
                maxElement = A[i];
                lastMaxIndex = i;
            }
        }
    }
    return lastMaxIndex;
}

int main() {
    const int N = 200;
    int n;
    cout << "Enter size of array: ";
    cin >> n;
    int A[N];
    int C[N];
    for (int i = 0; i < n; i++)
    {
        cout << "A[" << i << "] = ";
        cin >> A[i];
    }
    buildArrayC(A, C, n);
    for (int i = 0; i < n; i++)
    {
        cout << "C[" << i << "] = " << C[i] << endl;
    }


    int c;
    int d;
    cout << "Enter c and d: ";
    cin >> c >> d;
    int lastIndex = findLastMaxIndex(A, N, c, d);
    if (lastIndex != -1) {
        cout << "Last maximum element index in range [" << c << ", " << d << "] before the first even element: " << lastIndex << endl;
    }
    else {
        cout << "No elements found in the range [" << c << ", " << d << "] before the first even element." << endl;
    }

    return 0;
}

/*........Hard work and consistency is the only way to success........ */
#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int N=1005;

int partition(vector<int>& a, int low, int high) {
    int pivot = a[high];
    int i = low;
    for (int j = low; j < high; ++j) {
        if (a[j] < pivot) {
            swap(a[i], a[j]);
            ++i;
        }
    }
    swap(a[i], a[high]);
    return i;
}

int kthsmallest(vector<int>& a, int l, int r, int k) {
    if (l == r)
        return a[l];
    
    int pivot_index = partition(a, l, r);
    
    if (k == pivot_index)
        return a[k];
    else if (k < pivot_index)
        return kthsmallest(a, l, pivot_index - 1, k);
    else
        return kthsmallest(a, pivot_index + 1, r, k);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    cin >> n;
    vector<int> a(n);  // Correctly initialize the vector with size n
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    
    int k;
    cin >> k;
    cout << kthsmallest(a, 0, n - 1, k - 1) << endl;
    
    return 0;
}

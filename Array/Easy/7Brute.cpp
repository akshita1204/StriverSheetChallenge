/*
vector<int> moveZeros(int n, vector<int> a) {

    vector<int> temp;

    for (int i = 0; i < n; i++) {
        if (a[i] != 0)
            temp.push_back(a[i]);
    }
    int nz = temp.size();
    for (int i = 0; i < nz; i++) {
        a[i] = temp[i];
    }
    for (int i = nz; i < n; i++) {
        a[i] = 0;
    }
    return a;
}
*/

/*
Time=> O(2*N)
Space=> O(N)
 */
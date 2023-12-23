/*Ishipuff Exam*/
#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
void file_i_o(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
}
int findMinDiff(vector<int>& arr, int n, int k)
{
	if (k == 0 || n == 0)
		return 0;

	sort(arr.begin(),arr.end());
	if (n < k)
		return -1;

	int min_diff = INT_MAX;
	for (int i = 0; i + k - 1 < n; i++) {
		int diff = arr[i + k - 1] - arr[i];
		if (diff < min_diff)
			min_diff = diff;
	}
	return min_diff;
}

int main()
{   file_i_o();
    int n,k;
    cin>>n>>k;
    vector<int> arr(n);
    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }

	cout << "The Minimum difference is "
		<< findMinDiff(arr, n, k);
	return 0;
}


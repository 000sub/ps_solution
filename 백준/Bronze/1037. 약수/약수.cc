#include <iostream>
#include <algorithm>

using namespace std;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	
	int n;
	cin>>n;
	
	int arr[n];
	for (int i=0;i<n;i++) cin>>arr[i];
	sort(arr, arr+n);
	
	cout<<arr[0]*arr[n-1];
	
	
	
	return 0;
}

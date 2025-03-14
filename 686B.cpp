    #include<bits/stdc++.h>
    using namespace std;
    int main() {
    	int n;
    	cin >> n;
    	long long arr[n];
    	for (int i = 0; i < n; i++) {
    		cin >> arr[i];
    	}
    	int i = 0;
    	while (i < n - 1) {
    		if (arr[i] > arr[i + 1]) {
    		    long long x=arr[i],y=arr[i+1];
    			arr[i]=y;
    			arr[i+1]=x;
    			cout << i + 1 <<" "<< i + 2 << "\n";
    		    i=0;
    		}
            i++;
    	}
    	return 0;
    }

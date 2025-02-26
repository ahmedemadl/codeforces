#include <bits/stdc++.h>
using namespace std;

int main() {
    int q;
    cin >> q;

    unordered_map<string, string> latest; // Maps original -> latest handle
    unordered_map<string, string> original; // Maps current -> original handle

    while (q--) {
        string old_handle, new_handle;
        cin >> old_handle >> new_handle;

        string first_handle = (original.count(old_handle) ? original[old_handle] : old_handle);
        
        // Update the mappings
        latest[first_handle] = new_handle;
        original.erase(old_handle); // Remove old from reverse map
        original[new_handle] = first_handle;
    }

    cout << latest.size() << "\n";
    for (const auto& entry : latest) {
        cout << entry.first << " " << entry.second << "\n";
    }

    return 0;
}

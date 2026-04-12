#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> arrival(n), departure(n);
    vector<pair<int, int>> events;

    for(int i = 0; i < n; i++) cin >> arrival[i];
    for(int i = 0; i < n; i++) cin >> departure[i];

    for(int i = 0; i < n; i++) {
        // Arrival event: +1 guest
        events.push_back({arrival[i], 1});
        // Departure event: -1 guest
        events.push_back({departure[i], -1});
    }

    // Sort by time. If times are equal, departures (-1) come before arrivals (1)
    // or vice versa depending on if departure time is inclusive. 
    // In Bytelandia, a guest stays UNTIL departure time.
    sort(events.begin(), events.end());

    int max_guests = 0;
    int current_guests = 0;

    for(auto const& event : events) {
        current_guests += event.second;
        max_guests = max(max_guests, current_guests);
    }

    cout << max_guests << endl;
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}
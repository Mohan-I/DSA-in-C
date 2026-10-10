/*
### Courier Delivery Fleet Problem (Minimum Time for Deliveries)

**Problem Statement:**
Given a fleet of 'N' couriers and a target number of deliveries (**$TD$**), find the **minimum total time** required for the combined fleet to complete at least $TD$ deliveries.

* Inputs:
* 'N': The number of couriers in the fleet.
* 'TD': The target total number of deliveries that need to be finished.
* `time[]`: An array of size $N$, where each element `time[i]` represents the exact amount of time it takes that specific courier to complete a *single* delivery.


* **How it works:**
Each courier works independently and continuously. In a given total time $T$, a courier with a delivery time of `time[i]` can complete $\lfloor T / \text{time}[i] \rfloor$ deliveries.
* **Goal:**
Find the smallest time $T$ where the sum of deliveries completed by all couriers is greater than or equal to `TD ( | T /time[i]) >= TD)`.

*/ 
long long countDeliveries(int time[], int n, long long T) {
    long long total = 0;
    for (int i = 0; i < n; i++) {
        total += (T / time[i]);
    }
    return total;
}

long long minTimeForDeliveries(int time[], int n, int target) {
    long long low = 1;
    // Maximum possible time would be if the slowest courier does all deliveries alone
    long long high = (long long)*max_element(time, time + n) * target; // Or find max manually
    long long ans = high;

    while (low <= high) {
        long long mid = low + (high - low) / 2;
        if (countDeliveries(time, n, mid) >= target) {
            ans = mid;        // Valid time, try to find a smaller one
            high = mid - 1;
        } else {
            low = mid + 1;    // Too short, increase time
        }
    }
    return ans;
}
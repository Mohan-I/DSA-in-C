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

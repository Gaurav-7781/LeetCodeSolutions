// Intuition
// Each time you drink a bottle, you get an empty bottle.
// You can exchange a fixed number of empty bottles to get new full bottles.

// 👉 This creates a repeatable cycle:

// Drink → get empty → exchange → get new full bottles

// Approach
// Initialize:
// total = numBottles (already drink these)
// empty = numBottles
// While you have enough empty bottles to exchange:

// Compute new bottles:

// newBottles = empty / numExchange

// Add to total:

// total += newBottles

// Update empty bottles:

// empty = newBottles + (empty % numExchange)
// Return total

// Complexity
// Time complexity:
// O(log n)

// Space complexity:
// O(1)

// Code
class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        int total=numBottles;
        int empty=numBottles;

        while(empty>=numExchange){
            int newBottles=empty/numExchange;
            total+=newBottles;
            empty=newBottles +(empty%numExchange);
        }
        return total;
    }
};
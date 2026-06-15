#include <stdio.h>

/*
 * Function: displayStats
 * Purpose: Reads an array using pointer arithmetic without modifying it.
 */
void displayStats(int *stats, int size) {
    printf("Current Hunter Stats:\n");
    printf("Strength:     %d\n", *(stats + 0));
    printf("Agility:      %d\n", *(stats + 1));
    printf("Intelligence: %d\n", *(stats + 2));
    printf("---------------------------\n");
}

/*
 * Function: levelUpStats
 * Purpose: Modifies the original array in memory using Pass-by-Reference.
 */
void levelUpStats(int *stats, int size, int boostAmount) {
    printf("\n>>> SYSTEM NOTIFICATION: Level Up! Applying +%d to all stats <<<\n\n", boostAmount);
    
    for(int i = 0; i < size; i++) {
        // Jumping through memory addresses and adding the boost amount
        *(stats + i) = *(stats + i) + boostAmount; 
    }
}

int main() {
    // 1. Initialize the base stats array: {Strength, Agility, Intelligence}
    int hunterStats[3] = {15, 20, 10};
    int numberOfStats = 3;

    // 2. Display the initial state
    displayStats(hunterStats, numberOfStats);
    
    // 3. Trigger the pass-by-reference modification
    // We pass the array and its size limit to prevent memory leaks
    levelUpStats(hunterStats, numberOfStats, 5);
    
    // 4. Display the modified state to prove the memory was updated
    displayStats(hunterStats, numberOfStats);

    return 0;
}

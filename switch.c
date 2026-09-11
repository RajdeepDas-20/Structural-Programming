#include <stdio.h>

int main() {
    // Assuming the comments say something like:
    // 1 = Tea, 2 = Coffee, 3 = Juice (common in these exercises)
    
    int choice = 2;// Step 1: Change to the correct number for Coffee

    switch (choice) { // Step 2: Insert choice inside switch()
        case 1: // Step 3: Replace each case with correct number
            printf("Tea\n");
            break;
        case 2:
            printf("Coffee\n");
            break;
        case 3:
            printf("Juice\n");
            break;
        default:// Step 4: Move the invalid message into default
            printf("Invalid choice\n");
    }

    return 0;
}


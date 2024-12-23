#include <stdio.h>

int main() {
    int bookID, dueDate, returnDate, daysOverdue;
    float fineRate = 0, fineAmount = 0;

    // Get inputs from the user
    printf("Enter the Book ID: ");
    scanf("%d", &bookID);
    
    printf("Enter the Due Date (as an integer): ");
    scanf("%d", &dueDate);
    
    printf("Enter the Return Date (as an integer): ");
    scanf("%d", &returnDate);

    // Calculate days overdue
    daysOverdue = returnDate - dueDate;

    // Determine the fine rate based on the days overdue
    if (daysOverdue <= 0) {
        // No fine if the book is returned on or before the due date
        fineRate = 0;
        fineAmount = 0;
    } else if (daysOverdue <= 7) {
        fineRate = 20;
        fineAmount = fineRate * daysOverdue;
    } else if (daysOverdue <= 14) {
        fineRate = 50;
        fineAmount = fineRate * daysOverdue;
    } else {
        fineRate = 100;
        fineAmount = fineRate * daysOverdue;
    }

    // Output the results
    printf("\n--- Fine Calculation ---\n");
    printf("Book ID: %d\n", bookID);
    printf("Due Date: %d\n", dueDate);
    printf("Return Date: %d\n", returnDate);
    printf("Days Overdue: %d\n", daysOverdue);
    printf("Fine Rate: Ksh. %.2f per day\n", fineRate);
    printf("Fine Amount: Ksh. %.2f\n", fineAmount);

    return 0;
}

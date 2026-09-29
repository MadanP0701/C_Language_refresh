#include <stdio.h> // Standard Input-Output library

int main() {
    // Variables to store inputs
    int age;
    float weight;
    char grade;
    char name; // Character array (string) to hold a word

    printf("=== MY SCANF MASTER REVISION NOTES ===\n\n");

    // =========================================================================
    // 1. THE '&' (AMPERSAND) RULE: WHY IS IT REQUIRED?
    // =========================================================================
    // Core Logic: printf() only needs to READ data, so passing a copy of the value is fine.
    // But scanf() needs to WRITE data from the keyboard permanently into the variable.
    // 
    // Passing just 'age' gives scanf the current value, but NOT its location. It gets lost.
    // '&age' means "Address of age". It passes the EXACT MEMORY LOCATION (RAM slot) 
    // of the variable. Now scanf knows exactly where to drop the user's input.
    
    printf("Enter age (int): ");
    scanf("%d", &age); // Needs '&' to target the variable's memory address

    printf("Enter weight (float): ");
    scanf("%f", &weight); // Needs '&' to target the variable's memory address


    // =========================================================================
    // 2. THE STRING EXCEPTION: WHY NO '&' FOR STRINGS?
    // =========================================================================
    // Trick: Why does scanf("%s", name); NOT use an ampersand?
    // Rule: In C, the name of any array (like 'name') automatically acts as a 
    // pointer to its very first element's memory address. 
    // Because the keyword 'name' is ALREADY a memory address, adding an '&' is wrong.
    
    printf("Enter your first name: ");
    scanf("%s", name); // NO '&' allowed! 'name' is already a memory address.
    // Note: %s stops reading at the first space. It cannot capture multi-word sentences.


    // =========================================================================
    // 3. THE INPUT BUFFER TRAP & THE FIX
    // =========================================================================
    // The Bug: When you hit 'Enter' after typing weight or name, a leftover '\n' 
    // (newline character) stays stuck inside the computer's input buffer.
    // If you read a character ('%c') next, scanf instantly grabs that hidden '\n' 
    // and completely skips the user's actual input.
    //
    // The Fix: Put a leading space before " %c". This tells scanf to discard all 
    // leftover whitespaces and newlines before reading the character.
    
    printf("Enter grade (char): ");
    scanf(" %c", &grade); // Notice the space before %c — fixes the skipped input bug!


    // =========================================================================
    // 4. SCANF RETURNS AN INT (Input Validation)
    // =========================================================================
    // Rule: scanf() is an integer function. It returns the TOTAL NUMBER OF VARIABLES 
    // successfully matched and filled with user data.
    //
    // We can use this return value inside an 'if' statement to verify inputs instantly.
    
    int target_score;
    printf("\nEnter your target score (Integer): ");

    // If the user types a valid integer, scanf fills the variable and returns 1.
    // If the user types text (like "abc"), matching fails, scanf returns 0, and the 'else' runs.
    if (scanf("%d", &target_score) == 1) {
        printf("Success! Target score updated to: %d\n", target_score);
    } else {
        printf("Error: Invalid input! You did not enter a valid number.\n");
    }

    return 0;
}

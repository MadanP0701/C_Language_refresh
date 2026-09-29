#include <stdio.h> // Standard Input-Output header

int main() {
    // ==========================================================
    // 1. BASIC DATA TYPES & FORMAT SPECIFIERS
    // ==========================================================
    int age = 21;
    float pi = 3.14159;
    char grade = 'A';
    char name[] = "Alex";

    printf("Age: %d\n", age);       // %d = integer
    printf("Pi: %f\n", pi);         // %f = float
    printf("Grade: %c\n", grade);   // %c = single character
    printf("Name: %s\n", name);     // %s = string/text


    // ==========================================================
    // 2. FORMATTING TRICKS
    // ==========================================================
    printf("Pi to 2 decimals: %.2f\n", pi); // %.2f limits to 2 decimal places
    printf("%s is %d years old.\n", name, age); // Multiple variables (ordered)


    // ==========================================================
    // 3. ESCAPE SEQUENCES (Special Characters)
    // ==========================================================
    printf("Line 1\nLine 2\n");      // \n = New line
    printf("Col 1\tCol 2\n");        // \t = Tab space
    printf("He said \"Hi\"\n");     // \" = Prints actual double quotes


    // ==========================================================
    // 4. THE RETURN VALUE (Crucial Exam/Interview Detail)
    // ==========================================================
    // Core Rule: printf() is an INT function. It returns the total 
    // count of characters it successfully prints to the screen.
    
    int char_count;

    // "Hello\n" -> H(1) + e(2) + l(3) + l(4) + o(5) + \n(6)
    // Note: \n counts as exactly ONE character, even though it's typed as two.
    char_count = printf("Hello\n"); 

    // This will print 6, because "Hello\n" took 6 characters of space.
    printf("The previous printf printed %d characters.\n", char_count);


    // Note: If an output error happens (rare), printf() returns a negative number (-1).

    // since all non zero values are treated as true, we can use printf() inside if else statements

    return 0;
}


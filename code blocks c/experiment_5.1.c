/* Write programs to print the following structure:
                            *
                         *  *   *
                     *  *   *  *   *
                   *  *   *  *  *   *  *        */

 #include<stdio.h>
 #include<conio.h>

  kint main() {
    int rows = 4; // Number of rows in the pyramid

    for (int i = 1; i <= rows; i++) {
        // Print leading spaces
        for (int j = 1; j <= rows - i; j++) {
            printf("  "); // Two spaces for better alignment
        }

        // Print stars with spaces
        for (int k = 1; k <= (2 * i - 1); k++) {
            printf("* ");
        }

        // Move to the next line
        printf("\n");
    }

    return 0;
}

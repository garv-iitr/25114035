#include <stdio.h>

int main() {
    int n;

    // Get the grid size from the user
    printf("Enter the size of the grid (n): ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("Invalid input. Please enter a positive integer.\n");
        return 1;
    }

    printf("\nClockwise Spiral Matrix for n = %d:\n\n", n);

    // Loop through each row of the grid
    for (int r = 0; r < n; r++) {
        // Loop through each column of the grid
        for (int c = 0; c < n; c++) {
            // --- Calculate the value for cell (r, c) without using a 2D array ---

            // 1. Determine the layer of the current cell.
            // A layer is a concentric square in the spiral. Layer 0 is the outermost.
            // The layer 'm' is the minimum distance from any of the four edges.
            int m_dist_r = r < n - 1 - r ? r : n - 1 - r; // Min distance from top/bottom edge
            int m_dist_c = c < n - 1 - c ? c : n - 1 - c; // Min distance from left/right edge
            int m = m_dist_r < m_dist_c ? m_dist_r : m_dist_c; // The layer is the smaller of the two

            // 2. Calculate properties of this layer.
            // Side length of the square for the current layer 'm'.
            int side_len = n - 2 * m;
            // The base value is the total count of numbers in all the outer layers.
            // This is the number just before the spiral for the current layer begins.
            long long base_value = (long long)4 * m * (n - m);

            // 3. Find the cell's position on its layer's perimeter and calculate its value.
            long long value;
            if (r == m) {
                // Cell is on the TOP edge of its layer
                value = base_value + (c - m) + 1;
            } else if (c == n - 1 - m) {
                // Cell is on the RIGHT edge of its layer
                value = base_value + side_len + (r - m);
            } else if (r == n - 1 - m) {
                // Cell is on the BOTTOM edge of its layer
                value = base_value + (3 * side_len) - 2 - (c - m);
            } else { // c == m
                // Cell is on the LEFT edge of its layer
                value = base_value + (4 * side_len) - 3 - (r - m);
            }

            // Print the calculated value with formatting for alignment
            printf("%-5lld", value);
        }
        // Move to the next line after printing a full row
        printf("\n");
    }

    return 0;
}


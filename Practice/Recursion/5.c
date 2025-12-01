#include<stdio.h>

int main() {
    int arr[] = {1, 2, 3};
    int subset[3] = {0};
    findSubsets(arr, 3, 0, 0, 3, subset);
} 
void findSubsets(int arr[], int n, int index, int sum, int target,int subset[]) {
    if (index == n) {
        if (sum == target) {
            for (int i = 0; i < n; i++) {
                if (subset[i]) {
                    printf("%d ", arr[i]);
                }
            }
            printf("\n");
        }
        return;
    }
    subset[index] = 1;
    findSubsets(arr, n, index + 1, sum + arr[index], target,subset);
    
    subset[index] = 0;
    findSubsets(arr, n, index + 1, sum, target, subset);
}
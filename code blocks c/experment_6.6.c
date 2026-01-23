/*Write a menu-based program that takes two linear arrays A and B as input and displays
the results of the following operations based on user’s choice.
1. Traverse A.
2. Traverse B.
3. Insert a new element in A (after insertion, the size of A should increase by 1).
4. Insert a new element in B (after insertion, the size of B should increase by 1).
5. Delete an element from A.
6. Delete an element from B.

7. Search an element in A.
8. Search an element in B.
9. Sort A (in ascending order).
10. Sort B (in ascending order).
11. Merge A and B to form a new array C.*/
#include <stdio.h>
#define MAX 100

// Function to traverse and print an array
void traverse(int arr[], int size) {
    if (size == 0) {
        printf("Array is empty.\n");
        return;
    }
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

// Function to insert an element at the end
void insert(int arr[], int *size, int value) {
    if (*size >= MAX) {
        printf("Array is full. Cannot insert.\n");
        return;
    }
    arr[*size] = value;
    (*size)++;
}

// Function to delete the first occurrence of an element
void delete(int arr[], int *size, int value) {
    int found = 0;
    for (int i = 0; i < *size; i++) {
        if (arr[i] == value) {
            found = 1;
            for (int j = i; j < *size - 1; j++) {
                arr[j] = arr[j + 1];
            }
            (*size)--;
            break;
        }
    }
    if (!found) {
        printf("Element not found.\n");
    }
}

// Function to search for an element
void search(int arr[], int size, int value) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == value) {
            printf("Element found at index %d\n", i);
            return;
        }
    }
    printf("Element not found.\n");
}

// Function to sort an array in ascending order
void sort(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

// Function to merge two arrays into a third
void merge(int A[], int sizeA, int B[], int sizeB, int C[], int *sizeC) {
    *sizeC = 0;
    for (int i = 0; i < sizeA; i++) {
        C[(*sizeC)++] = A[i];
    }
    for (int i = 0; i < sizeB; i++) {
        C[(*sizeC)++] = B[i];
    }
}

int main() {
    int A[MAX], B[MAX], C[2 * MAX];
    int sizeA, sizeB, sizeC;
    int choice, value;

    printf("Enter number of elements in A: ");
    scanf("%d", &sizeA);
    printf("Enter elements of A:\n");
    for (int i = 0; i < sizeA; i++) {
        scanf("%d", &A[i]);
    }

    printf("Enter number of elements in B: ");
    scanf("%d", &sizeB);
    printf("Enter elements of B:\n");
    for (int i = 0; i < sizeB; i++) {
        scanf("%d", &B[i]);
    }

    do {
        printf("\nMenu:\n");
        printf("1. Traverse A\n");
        printf("2. Traverse B\n");
        printf("3. Insert into A\n");
        printf("4. Insert into B\n");
        printf("5. Delete from A\n");
        printf("6. Delete from B\n");
        printf("7. Search in A\n");
        printf("8. Search in B\n");
        printf("9. Sort A\n");
        printf("10. Sort B\n");
        printf("11. Merge A and B into C\n");
        printf("0. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Array A: ");
                traverse(A, sizeA);
                break;
            case 2:
                printf("Array B: ");
                traverse(B, sizeB);
                break;
            case 3:
                printf("Enter value to insert into A: ");
                scanf("%d", &value);
                insert(A, &sizeA, value);
                break;
            case 4:
                printf("Enter value to insert into B: ");
                scanf("%d", &value);
                insert(B, &sizeB, value);
                break;
            case 5:
                printf("Enter value to delete from A: ");
                scanf("%d", &value);
                delete(A, &sizeA, value);
                break;
            case 6:
                printf("Enter value to delete from B: ");
                scanf("%d", &value);
                delete(B, &sizeB, value);
                break;
            case 7:
                printf("Enter value to search in A: ");
                scanf("%d", &value);
                search(A, sizeA, value);
                break;
            case 8:
                printf("Enter value to search in B: ");
                scanf("%d", &value);
                search(B, sizeB, value);
                break;
            case 9:
                sort(A, sizeA);
                printf("Array A sorted.\n");
                break;
            case 10:
                sort(B, sizeB);
                printf("Array B sorted.\n");
                break;
            case 11:
                merge(A, sizeA, B, sizeB, C, &sizeC);
                printf("Merged array C: ");
                traverse(C, sizeC);
                break;
            case 0:
                printf("Exiting program.\n");
                break;
            default:
                printf("Invalid choice.\n");
        }
    } while (choice != 0);

    return 0;
}

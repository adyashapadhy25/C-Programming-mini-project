#include <stdio.h>
#include <string.h>

// Structure to store student information
struct Student {
    char name[50];
    int studentId;
};

// Structure to store book information
struct Book {
    char title[50];
    int bookId;
    int availableCopies;
};

// Function to check if the student is registered in the system
int isStudentRegistered(struct Student students[], int totalStudents, int studentId) {
    int i;
    for (i = 0; i < totalStudents; i++) {
        if (students[i].studentId == studentId) {
            return 1; // Student found and registered
        }
    }
    return 0; // Student not found
}

// Function to issue a book to the student
void issueBook(struct Book books[], int totalBooks, int bookId) {
    int i;
    for (i = 0; i < totalBooks; i++) {
        if (books[i].bookId == bookId) {
            if (books[i].availableCopies > 0) {
                books[i].availableCopies--;
                printf("Book '%s' issued successfully!\n", books[i].title);
                return;
            } else {
                printf("Sorry, '%s' is currently unavailable.\n", books[i].title);
                return;
            }
        }
    }
    printf("Invalid Book ID.\n");
}

// Function to return a book
void returnBook(struct Book books[], int totalBooks, int bookId) {
    int i;
    for (i = 0; i < totalBooks; i++) {
        if (books[i].bookId == bookId) {
            books[i].availableCopies++;
            printf("Book '%s' returned successfully!\n", books[i].title);
            return;
        }
    }
    printf("Invalid Book ID.\n");
}

int main() {
    // Sample student data (name and student ID)
    struct Student students[20] = {
        {"Adyasha", 101}, {"Deepta", 102}, {"Rahul", 103}, {"Puja", 104}, {"Bipasa", 105},
        {"Nikita", 106}, {"Pushpita", 107}, {"Aman", 108}, {"Roshni", 109}, {"Simran", 110},
        {"Queen", 111}, {"Deesha", 112}, {"Nia", 113}, {"Nayan", 114}, {"Anmesh", 115},
        {"Prashant", 116}, {"Monali", 117}, {"Sipali", 118}, {"Sonali", 119}, {"Smitashree", 120}
    };
    int totalStudents = 20;

    // Sample book data (book title, book ID, and available copies)
         struct Book books[8] = {
        {"C Programming", 1, 3},
        {"Data Structures", 2, 2},
        {"Algorithms", 3, 1},
        {"Operating Systems", 4, 5},
        {"Database Management", 5, 4},
        {"Computer Networks", 6, 2},
        {"Discrete Mathematics", 7, 3},
        {"Computer Architecture", 8, 6}
    };
    int totalBooks = 8;
    
    

    int studentId, choice, bookId;

    printf("Welcome to the Library Management System!\n");

    // Ask the student for their ID
    printf("Please enter your student ID: ");
    scanf("%d", &studentId);

    // Check if the student is registered
    if (isStudentRegistered(students, totalStudents, studentId)) {
        printf("Welcome, Student ID %d! You are registered.\n", studentId);
        do {
            // Display menu options for the student
            printf("\nLibrary Menu:\n");
            printf("1. Issue a Book\n");
            printf("2. Return a Book\n");
            printf("3. Exit\n");
            printf("Enter your choice: ");
            scanf("%d", &choice);

            switch (choice) {
                case 1:
                    // Issue book
                    printf("Enter the Book ID to issue: ");
                    scanf("%d", &bookId);
                    issueBook(books, totalBooks, bookId);
                    break;
                case 2:
                    // Return book
                    printf("Enter the Book ID to return: ");
                    scanf("%d", &bookId);
                    returnBook(books, totalBooks, bookId);
                    break;
                case 3:
                    printf("Thank you for visiting the library. Goodbye!\n");
                    break;
                default:
                    printf("Invalid choice. Please try again.\n");
            }
        } while (choice != 3);
    } else {
        printf("You are not registered in the system. Access denied.\n");
    }

    return 0;
}


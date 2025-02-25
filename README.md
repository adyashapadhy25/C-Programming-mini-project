# C-Programming-mini-project
Library Management System
This is a simple Library Management System implemented in C programming language that allows students to issue and return books. It keeps track of student registrations and manages book availability.

Features:
*Student Registration Check: Ensures that only registered students can issue or return books.
*Book Issue: Allows students to issue books if available copies exist.
*Book Return: Enables students to return books and update the available copies.
*User-friendly Menu: Simple text-based menu for users to interact with the system.
 Structures Used:
1. Student Structure:
*Stores information about the student, including:
*name: Student's name (up to 50 characters).
*studentId: Unique identifier for each student.
2. Book Structure:
*Stores information about the books available in the library, including:
*title: Name of the book (up to 50 characters).
*bookId: Unique identifier for each book.
*availableCopies: Number of available copies of the book.

Functions Used:
1.isStudentRegistered():
*Takes in the list of students and checks if the entered studentId is registered in the system.
*Returns 1 if the student is found, otherwise 0.
2. issueBook():
*Takes in a bookId and checks if the book is available.
*Decreases the available copies of the book by 1 if it is available, otherwise notifies the user that the book is unavailable.
3. returnBook():
*Takes in a bookId and increases the available copies by 1 when the book is returned.

Main Flow:
1. Student Input:
*The user is prompted to enter their studentId.
*The system checks if the student exists in the system using the isStudentRegistered() function.
2. Menu Options:
*If the student is registered, they are presented with a menu of options:
*Issue a Book: The user can issue a book by providing the bookId.
*Return a Book: The user can return a book by providing the bookId.
*Exit: Exits the system.
3. Looping:
*The menu system allows users to continue issuing or returning books until they choose to exit.

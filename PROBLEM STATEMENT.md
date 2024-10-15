# Library Management System

Objective:Create a simple Library Management System that allows users to manage books and their borrowing process.

#### Requirements:

1. **Classes and Objects:**
   - Create a `Book` class that has the following attributes:
     - `title` (string)
     - `author` (string)
     - `ISBN` (string)
     - `isBorrowed` (boolean)
   - Include methods for:
     - Getting book details.
     - Borrowing the book (set `isBorrowed` to true).
     - Returning the book (set `isBorrowed` to false).

2. **Encapsulation:**
   - Use private access specifiers for the attributes in the `Book` class and provide public methods to access and modify them.

3. **Inheritance:**
   - Create a derived class `EBook` that inherits from `Book` and adds an additional attribute:
     - `fileSize` (in MB).
   - Override the method for getting book details to include the file size.

4. **Polymorphism:**
   - Create a base class `LibraryItem` with a virtual method `getDetails()`.
   - Both `Book` and `EBook` should override this method to provide their own implementations for displaying details.

5. **Abstraction:**
   - Create an abstract class `Library` with pure virtual methods:
     - `addItem(LibraryItem* item)`
     - `removeItem(string isbn)`
     - `searchItem(string isbn)`
     - `borrowItem(string isbn)`
     - `returnItem(string isbn)`
   - Implement a concrete class `PublicLibrary` that inherits from `Library` and manages a collection of `LibraryItem` pointers.

6. **User Interaction:**
   - Implement a simple console interface to interact with the `PublicLibrary` class, allowing users to add, remove, search, borrow, and return books.

### Deliverables:
- Complete C++ code implementing the above specifications.
- A sample main function demonstrating the functionality of the Library Management System.

### Considerations:
- Make sure to handle memory management appropriately, especially when dealing with dynamic memory allocation for `LibraryItem` pointers.
- Add error handling for scenarios like attempting to borrow a book that is already borrowed.

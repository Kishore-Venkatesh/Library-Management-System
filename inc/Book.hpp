/**
 * @file class_Book.hpp
 * @author Kishore V
 * @brief A header file for creating Book class
 * @date 2024-10-15
 * 
 */

#ifndef BOOK_HPP
#define BOOK_HPP

#include <string>
#include <iostream>

/**
 * @class Book 
 * @brief A class that contains the details of the book 
 */
class Book
{
    private:
        std::string title;                                  // A string to store name of the book
        std::string author;                                 // A string to store name of the author
        int numberOfPages;                                  // An integer to store the number of pages in book
        std::string ISBN;                                   // A string to store ISBN - 13 digits data 
        bool isBorrowed;                                    // A boolean to store whether the book is borrowed or not

    public:

    /**
     * @brief Parameterized Constructor for class Book 
     * @param[in] bookname 
     * @param[in] authorname 
     * @param[in] pages 
     * @param[in] isbn 
     * @param[in] borrowDetails 
     * 
     * It is used to initialize the data members in the class Book
     */
        Book(std::string bookname,std::string authorname, int pages, std::string isbn, bool borrowDetails);

    /**
     * @brief Destructor for class Book
     */
        ~Book();

    /**
     * @brief Copy Constructor for class Book
     * @param[in] other The object to copy from
     * 
     * Creates a new object of class Book which is a copy of another
     */
        Book(const Book& other);

    /**
     * @brief Copy Assignment Operator for class Book
     * @param[in] other The object to copy from
     * @return A reference to this object 
     */
        Book& operator=(const Book& other);

    /**
     * @brief A constant function to get the details of the book
     * @param void No paramters are passed
     * @return Return type is void 
     */
        void getDetails(void) const;

    /**
     * @brief A constant function to set the if the book is borrowed
     * @param void No paramters are passed
     * @return Return type is void 
     */
        void setBorrowed(void) const;

    /**
     * @brief A constant function to set the if the book is returned
     * @param void No paramters are passed
     * @return Return type is void 
     */
        void setReturned(void) const;

};

#endif //BOOK_HPP 

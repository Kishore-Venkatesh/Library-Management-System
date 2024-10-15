/**
 * @file Book.cpp
 * @author Kishore V
 * @brief A source file for Book class
 * @date 2024-10-15
 * 
 */

#include <iostream>
#include <string>
#include "Book.hpp"

/**
 * @brief Implementation of Book class constructor 
 */
    Book::Book(std::string bookname,std::string authorname, int pages, std::string isbn, bool borrowDetails)
                : title(bookname),
                  author(authorname),
                  numberOfPages(pages),
                  ISBN(isbn),
                  isBorrowed(borrowDetails)
  { }

/**
 * @brief Implemenation of Book class destructor
 */
    Book::~Book() { }

/**
 * @brief Implementation of Book class copy constructor
 */
    Book::Book(const Book& other)
        : title(other.title),
          author(other.author),
          numberOfPages(other.numberOfPages),
          ISBN(other.ISBN),
          isBorrowed(other.isBorrowed)
    { }

/**
 * @brief Implementation of Book class copy assignment operator
 */
    Book& Book::operator=(const Book& other)
    {
        if(this != &other)
        {
            title = other.title;
            author = other.author;
            numberOfPages = other.numberOfPages;
            ISBN = other.ISBN;
            isBorrowed = other.isBorrowed;
        }
        return *this;
    }

/**
 * @brief Implementation of getDetails function of Book class
 */
    void Book::getDetails(void) const
    {
        std::cout << "Title of the Book : " << title  << std::endl;
        std::cout << "Author of the Book: " << author << std::endl;
        std::cout << "Number of Pages   : " << numberOfPages << std::endl;
        std::cout << "ISBN              : " << ISBN   << std::endl;
        bookAvailability();
    }

/**
 * @brief Implemenation of bookAvailabilty function of Book class
 *          If true , book is available to borrow
 *          If false, book is not available
 */
    void Book::bookAvailability(void) const
    {
        if(isBorrowed == true)
        {
            std::cout << "Book is available." << std::endl;
        }
        else
        {
            std::cout << "Book is not available." << std::endl;
        }
    }

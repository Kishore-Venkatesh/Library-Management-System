/**
 * @file main.cpp
 * @author Kishore V
 * @brief main file for the project
 * @date 2024-10-15
 * 
 */

#include <iostream>
#include "Book.hpp"

int main()
{
    Book b1("The C Programming Language","Brian W. Kernighan and Dennis M. Ritchie",272,"978-0131103627",true);
    b1.getDetails();
    Book b2("C++ Primer","Stanley B. Lippman, Josée Lajoie, and Barbara E. Moo",976,"978-0321992789",false);
    b2.getDetails();
    return 0;
}

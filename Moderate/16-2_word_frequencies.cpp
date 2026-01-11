/**
 * @file
 * @brief Find the frequency of occurences of a given word in a book.
 * 
 * This module desigans and implements a method that scans a book
 * and couputes how many times a specific word occurs.
 * 
 * bonus: What if we were running this algorithm multiple times
 */


// need example book
// need frequency finder method. How to pass the book text ?

// Single Query example

#include <string>

int getFrequency (String[] book, String word) {
    word = word.trim().toLowerCase();
    int count = 0;
    for (String w : book) {
        if (w.trim().toLowerCase().equals(word)) {
            count++;
        }
    }
    return count;
}



int main() {

    return 0;
}
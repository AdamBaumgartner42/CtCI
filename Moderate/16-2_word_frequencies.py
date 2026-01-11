#!/usr/bin/env python3
# -*- coding: utf-8 -*-

"""
@file 16-2_word_frequencies.py
@brief find the frequency of words in a book
"""

def getFrequency(book, word) -> int:
    word.strip().lower()
    count = 0
    for w in book.split():
        if w.strip().lower() == word:
            count += 1
    return count


def main() -> None: 
    book = "This is the book you've been looking for"
    word = "book"

    print(getFrequency(book, word))

if __name__ == "__main__":
    main()
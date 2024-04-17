/*
** EPITECH PROJECT, 2024
** Workshop_Unit_Tests
** File description:
** tests_my_count_words
*/

#include "tests_includes.h"

Test(my_count_words, empty_str)
{
    cr_assert_eq(my_count_words("", " "), 0);
}

Test(my_count_words, single_word)
{
    cr_assert_eq(my_count_words("hello", " "), 1);
}

Test(my_count_words, multiple_words)
{
    cr_assert_eq(my_count_words("hello world", " "), 2);
}
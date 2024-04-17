/*
** EPITECH PROJECT, 2024
** Workshop_Unit_Tests
** File description:
** tests_my_strlen_sepa
*/

#include "tests_includes.h"

Test(my_strlen_sepa, empty_str)
{
    cr_assert_eq(my_strlen_sepa("", " "), 0);
}

Test(my_strlen_sepa, no_sep_characters)
{
    cr_assert_eq(my_strlen_sepa("hello", " "), 5);
}

Test(my_strlen_sepa, with_sep_characters)
{
    cr_assert_eq(my_strlen_sepa("hello world", " "), 5);
}

Test(my_strlen_sepa, empty_sepa)
{
    cr_assert_eq(my_strlen_sepa("hello", ""), 5);
}

Test(my_strlen_sepa, single_sep_character)
{
    cr_assert_eq(my_strlen_sepa("hello", "o"), 4);
}

/*
** EPITECH PROJECT, 2024
** Workshop_Unit_Tests
** File description:
** tests_str_is_token
*/

#include "tests_includes.h"

Test(str_is_token, all_tokens)
{
    cr_assert_eq(str_is_token("hello", "helo"), true);
}

Test(str_is_token, not_all_tokens)
{
    cr_assert_eq(str_is_token("hello", "heo"), false);
}

Test(str_is_token, empty_tokens)
{
    cr_assert_eq(str_is_token("hello", ""), false);
}

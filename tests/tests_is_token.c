/*
** EPITECH PROJECT, 2024
** Workshop_Unit_Tests
** File description:
** tests_is_token
*/

#include "tests_includes.h"

Test(is_token, null_tokens)
{
    char *tokens = NULL;
    cr_assert_eq(is_token('a', tokens), false);
}

Test(is_token, empty_tokens) {
    char *tokens = "";
    cr_assert_eq(is_token('a', tokens), false);
}

Test(is_token, single_token)
{
    char *tokens = "a";
    cr_assert_eq(is_token('a', tokens), true);
}

Test(is_token, multiple_tokens)
{
    char *tokens = "abc";
    cr_assert_eq(is_token('b', tokens), true);
}

Test(is_token, non_existing_token)
{
    char *tokens = "abc";
    cr_assert_eq(is_token('d', tokens), false);
}

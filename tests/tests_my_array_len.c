/*
** EPITECH PROJECT, 2024
** Workshop_Unit_Tests
** File description:
** tests_my_array_len
*/

#include "tests_includes.h"

Test(my_array_len, check_len_5)
{
    char *arr[] =  {"bonjour", "la", "mif", "je", "mange", NULL};
    cr_assert_eq(my_array_len(arr), 5);
}

Test(my_array_len, empty)
{
    char **arr = NULL;
    cr_assert_eq(my_array_len(arr), -1);
}

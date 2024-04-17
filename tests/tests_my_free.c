/*
** EPITECH PROJECT, 2024
** Workshop_Unit_Tests
** File description:
** tests_my_free
*/

#include "tests_includes.h"

Test(my_free, basic_test)
{
    int *ptr = malloc(sizeof(int));
    my_free(ptr);
}

Test(my_free, no_malloc)
{
    int *ptr = 0;
    my_free(ptr);
}

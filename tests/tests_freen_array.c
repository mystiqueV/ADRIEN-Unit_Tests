/*
** EPITECH PROJECT, 2024
** Workshop_Unit_Tests
** File description:
** tests_freen_array
*/

#include "tests_includes.h"

Test(freen_array, null_array) {
    char **array = NULL;
    freen_array(array, 5);
}

Test(freen_array, negative_n) {
    char *array[] = {"Hello", "World"};
    freen_array(array, -1);
}

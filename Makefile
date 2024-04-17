##
## EPITECH PROJECT, 2024
## Workshop_Unit_Tests
## File description:
## Makefile
##

NAME	=	my_str_to_word_array

TEST_NAME	=	unit_tests

CC	=	gcc

RM	=	rm -f

CFLAGS	=	-W -Wall -Wextra -Werror -I./includes

UNIT_FLAGS	=	-lcriterion --coverage

SRC_MAIN	=	src/src_main/main.c

SRC	=	$(shell find src/ -name '*.c' -not -name 'main.c')

SRC_UNIT = $(shell find tests/ -name '*.c')

OBJ	=	$(SRC:.c=.o)

OBJ_MAIN	=	$(SRC_MAIN:.c=.o)


all:	$(NAME)

$(NAME):	$(OBJ) $(OBJ_MAIN)
	$(CC) -o $(NAME) $(OBJ) $(OBJ_MAIN) $(CFLAGS)

clean:
	$(RM) $(OBJ) $(OBJ_MAIN)

fclean:	clean
	$(RM) $(NAME)

re:	fclean all

tests_run:
	$(CC) -o $(TEST_NAME) $(SRC) $(SRC_UNIT) $(CFLAGS) $(UNIT_FLAGS)
	./$(TEST_NAME) && gcovr --exclude tests/ && gcovr --branches --exclude tests/

tests_clean:
	find . -name "*.gcda" -delete -or -name "*.gcno" -delete

tests_fclean: tests_clean
	$(RM) $(TEST_NAME)

tests_re: tests_fclean tests_run

.PHONY:	all tests_run tests_clean clean tests_fclean fclean tests_re re

# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gsap <gsap@student.42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/22 18:36:37 by gsap              #+#    #+#              #
#    Updated: 2022/05/03 12:45:20 by gsap             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#    Colors
GREY = \e[90m
RED = \e[91m
GREEN = \e[92m
YELLOW = \e[93m
BLUE = \e[34m
PURPLE = \e[95m
CYAN = \e[96m
END = \e[39m

#    Showing command
DISP = TRUE

ifeq ($(DISP),TRUE)
    HIDE =
else
    HIDE = @
endif

#    Files
SRCS = tests.cpp Account.cpp

#    Compilation
NAME = Restore

CC = c++

CFLAGS = -Wall -Wextra -Werror

RM = rm -rf

OBJS_PATH = objs/

OBJS = $(patsubst %.cpp,	$(OBJS_PATH)%.o,	$(SRCS))

#    Rules
all: $(NAME)

$(NAME): $(OBJS_PATH) $(OBJS) Account.hpp
	@ echo "$(BLUE)\n         ***Make $(NAME) ***\n$(END)"
	$(HIDE) $(CC) $(CFLAGS) $(OBJS) -o $(NAME)
	@ echo "$(GREEN)\n        ---$(NAME) created ---\n$(END)"

$(OBJS_PATH):
	$(HIDE) mkdir -p $(OBJS_PATH)

$(OBJS_PATH)%.o: %.cpp Account.hpp Makefile
	$(HIDE) $(CC) $(CFLAGS) -c $< -o $@
	@ echo "$(GREEN)[ OK ]$(END) $(CYAN)${<:.s=.o}$(END)"

clean:
	$(HIDE) $(RM) $(OBJS_PATH)
	@ echo "$(PURPLE)\n        *** Clean objects ***\n$(END)"

fclean: clean
	$(HIDE) $(RM) $(NAME)
	@ echo "$(RED)\n        *** Remove $(NAME) ***\n$(END)"

re: fclean all

.PHONY: all clean fclean re

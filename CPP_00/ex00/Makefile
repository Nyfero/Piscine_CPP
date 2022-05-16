# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gsap <gsap@student.42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/22 18:36:37 by gsap              #+#    #+#              #
#    Updated: 2022/05/16 15:27:01 by gsap             ###   ########.fr        #
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
DISP = FALSE

ifeq ($(DISP),TRUE)
    HIDE =
else
    HIDE = @
endif

#    Includes

#    Folders
SRCS_PATH = ./

#    Files
SRCS = megaphone.cpp

#    Compilation
NAME = megaphone

CXX = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98

RM = rm -rf

OBJS_PATH = objs/

OBJS = $(patsubst %.cpp,	$(OBJS_PATH)%.o,	$(SRCS))

#    Rules
all: $(NAME)

$(NAME): $(OBJS_PATH) $(OBJS)
	@ echo "$(BLUE)\n         ***Make $(NAME) ***\n$(END)"
	$(HIDE) $(CXX) $(CFLAGS) $(OBJS) -o $(NAME)
	@ echo "$(GREEN)\n        ---$(NAME) created ---\n$(END)"

$(OBJS_PATH):
	$(HIDE) mkdir -p $(OBJS_PATH)

$(OBJS_PATH)%.o: $(SRCS_PATH)%.cpp Makefile
	$(HIDE) $(CXX) $(CFLAGS) -c $< -o $@
	@ echo "$(GREEN)[ OK ]$(END) $(CYAN)${<:.s=.o}$(END)"

clean:
	$(HIDE) $(RM) $(OBJS_PATH)
	@ echo "$(PURPLE)\n        *** Clean objects ***\n$(END)"

fclean: clean
	$(HIDE) $(RM) $(NAME)
	@ echo "$(RED)\n        *** Remove $(NAME) ***\n$(END)"

re: fclean all

.PHONY: all clean fclean re

# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rabril-h <rabril-h@student.42barcelona.    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/25 17:56:56 by rabril-h          #+#    #+#              #
#    Updated: 2023/09/25 18:11:51 by rabril-h         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = megaphone

SRCS = megaphone.cpp

CC = c++
RM = rm -f
CFLAGS = -Wall -Wextra -Werror -std=c++98 -MMD

%.o: %.cpp Makefile
		@${CC} ${CFLAGS} -c $< -o $@

OBJS = ${SRCS:.cpp=.o}
DEPS = ${SRCS:.cpp=.d}

${NAME}:: ${OBJS}
	@${CC} $(CFLAGS) $(OBJS) -o ${NAME}
	@echo "All files compiled"

all:
		@$(MAKE) ${NAME} 

-include ${DEPS}

clean:
			@${RM} ${OBJS} ${DEPS}
			@echo "Objects cleaned"

fclean: clean 
			@${RM} ${OBJS} ${DEPS} ${NAME}
			@echo "All compilation files removed"

re: 
			@$(MAKE) fclean 
			@$(MAKE) all 

.PHONY: all clean fclean re
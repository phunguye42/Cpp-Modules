NAME = SedV2
SRCS = main.cpp \
		SedV2.cpp \

########################################################################
OBJS = $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	g++ -Wall -Wextra -Werror -I. $(OBJS) -o $(NAME)

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re:	fclean all

.PHONY: all clean fclean re

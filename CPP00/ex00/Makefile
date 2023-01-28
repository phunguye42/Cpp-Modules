SRCS = megaphone.cpp
OBJS = $(SRCS:.cpp=.o)
NAME = megaphone

all:	$(NAME)

$(NAME):	$(OBJS)
	g++ -Wall -Wextra -Werror $(OBJS) -o $(NAME)

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re:	fclean	all

.PHONY:			all clean fclean re
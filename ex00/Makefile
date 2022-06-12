NAME = megaphone
OBJS = megaphone.o

CC = c++
CFLAGS = -Wall -Wextra -Werror
DBFLAGS = -std=c++98

all: $(NAME)

debug: CFLAGS+=$(DBFLAGS)
debug:	$(NAME)

$(NAME): $(OBJS)
	$(CC) $^ -o $@

clean: 
	$(RM) $(OBJS)
	
fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re debug
NAME = phonebook
OBJS = contact.class.o phoneBook.class.o

CC = c++
CFLAGS = -Wall -Wextra -Werror
DBFLAGS = -std=c++98

OBJ=$(OBJS:.cpp=.o)

%.o: %.cpp
	$(CC) $(CFLAGS) $(DBFLAGS) -o $@ -c $<

all: $(NAME)

debug: CFLAGS+=$(DBFLAGS)
debug:	$(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(DBFLAGS)  $^ -o $@

clean: 
	$(RM) $(OBJ)
	
fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re debug
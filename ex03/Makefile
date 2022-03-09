SRCS	=	main.cpp \
			AMateria.cpp

OBJS	=	$(SRCS:.cpp=.o)

LINK	=	-I/AMateria.hpp
NAME	=	Animal
CC		=	clang++
CFLAGS	=	-Wall -Wextra -Werror
RM		=	rm -rf

all : $(NAME)

%.o : %.cpp 
	$(CC) $(CFLAGS) $(LINK) -o $@ -c $<

$(NAME) : $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME) 

$(OBJS) : AMateria.hpp

clean :
	$(RM) $(OBJS)

fclean : clean
	$(RM) $(NAME)

re : fclean $(NAME)

.PHONY:		all clean fclean re
NAME		=	mutant

OBJ_DIR		=	objs
INC_DIR		=	$(shell find includes -type d)

vpath %.hpp $(foreach dir, $(INC_DIR), $(dir):)

SRCS	 	=	main.cpp

OBJS		=	$(SRCS:%.cpp=${OBJ_DIR}/%.o)

RM			=	rm -rf

CC			=	c++

CFLAGS		=	-Werror -Wall -Wextra -std=c++98 -g3

all:	${NAME}

$(NAME): ${OBJS} ${INC_DIR}
		${CC} ${CFLAGS} ${OBJS} -o ${NAME}

$(OBJ_DIR)/%.o: %.cpp ${INC_DIR} | $(OBJ_DIR)
		$(CC) $(CFLAGS) -c $< -o $@ -I ${INC_DIR}

$(OBJ_DIR) :
		mkdir -p $@

clean:
		${RM} $(OBJ_DIR)

fclean:		clean
		${RM} ${NAME}

re:			fclean
		$(MAKE) all

.PHONY:		all clean fclean re

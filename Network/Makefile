
NAME		=	libVriskaNetwork.so

DIR_SOURCE	=	src
DIR_INCLUDE	=	..
DIR_LIB		=	..

CXX		=	g++
RM		=	rm -f

CXXFLAGS	+=	-W -Wall -Wextra -ansi -pedantic
CXXFLAGS	+=	-fvisibility=hidden -fPIC
CXXFLAGS	+=	-I$(DIR_INCLUDE)
#CXXFLAGS	+=	-ggdb
BINFLAGS	+=	-shared -fPIC
BINFLAGS	+=	-L$(DIR_LIB) -lVriskaCore -lVriskaThreads -Wl,-rpath,`pwd`/$(DIR_LIB)

SRC		=	$(DIR_SOURCE)/Core/Loggers.cpp			\
			$(DIR_SOURCE)/Core/BufferRing.cpp		\
			$(DIR_SOURCE)/Socket/INativeSocket.cpp		\
			$(DIR_SOURCE)/Socket/LinuxSocket.cpp		\
			$(DIR_SOURCE)/Socket/SocketSet.cpp		\
			$(DIR_SOURCE)/Socket/Socket.cpp			\
			$(DIR_SOURCE)/Socket/SocketServer.cpp		\
			$(DIR_SOURCE)/Socket/SocketClient.cpp		\
			$(DIR_SOURCE)/Network/Server.cpp		\
			$(DIR_SOURCE)/Network/SimpleClient.cpp		\
			$(DIR_SOURCE)/Network/Client.cpp

OBJ		=	$(SRC:.cpp=.o)


$(NAME):	$(OBJ)
		$(CXX) -o $@ $(OBJ) $(BINFLAGS)

all:		$(NAME)

clean:
		$(RM) $(OBJ)

fclean:		clean
		$(RM) $(NAME)

re:		fclean all

.PHONY:		all clean fclean re

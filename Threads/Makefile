
NAME		=	libVriskaThreads.so

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
BINFLAGS	+=	-lpthread -lrt
BINFLAGS	+=	-L$(DIR_LIB) -lVriskaCore -Wl,-rpath,`pwd`/$(DIR_LIB)

SRC		=	$(DIR_SOURCE)/CondVar/INativeCondVar.cpp	\
			$(DIR_SOURCE)/CondVar/LinuxCondVar.cpp		\
			$(DIR_SOURCE)/CondVar/CondVar.cpp		\
			$(DIR_SOURCE)/Mutex/INativeMutex.cpp		\
			$(DIR_SOURCE)/Mutex/LinuxMutex.cpp		\
			$(DIR_SOURCE)/Mutex/Mutex.cpp			\
			$(DIR_SOURCE)/Thread/INativeThread.cpp		\
			$(DIR_SOURCE)/Thread/LinuxThread.cpp		\
			$(DIR_SOURCE)/Thread/Thread.cpp			\
			$(DIR_SOURCE)/Core/ScopedLock.cpp		\
			$(DIR_SOURCE)/Core/ThreadPool.cpp

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

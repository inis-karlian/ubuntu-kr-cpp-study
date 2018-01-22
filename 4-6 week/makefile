# 참고 블로그 : https://blog.naver.com/muri1004/220683116239

.SUFFIXES : .cc .o
CXX = g++
INC = -I
LIBS = -L
CXXFLAGS = -g $(INC) -fPIC
OBJS = $(SRCS:.cpp=.o)
SRCS = $(wildcard *.cpp) $(wildcard *.c)
TARGET = final_proj

all : $(TARGET)
	$(CXX) -o $(TARGET) $(OBJS) $(INC) $(LIBS)

$(TARGET) :
	$(CXX) -c $(SRCS) $(INC) $(LIBS)

clean :
#	rm -f $(TARGET)
	rm -f *.o


TARGET=test
CC=g++
OBJ=test.o
CFLAGS=-g -DNDEBUG -O3 -I/usr/include -I/usr/local/include 
CXXFLAGS=-I../include -std=c++11
LDFLAGS= -L/usr/lib -L/usr/local/lib -lpthread -lcpptest -lboost_context -lboost_system -lboost_thread -lboost_chrono

all : $(TARGET)

-include $(OBJS:.o=.d) 
  
%.d: %.c  
	@set -e; rm -f $@; $(CC) -MM $< $(CFLAGS) $(CXXFLAGS) > $@.$$$$; \
	sed 's,\($*\)\.o[ :]*,\1.o $@ : ,g' < $@.$$$$ > $@; \
	rm -f $@.$$$$

%.o : %.cpp
	$(CC) -c $(CFLAGS) $(CXXFLAGS) -o $@ $< 

$(TARGET) : $(OBJ)
	libtool --tag=CXX --mode=link $(CC) $(LDFLAGS) -o $@ $^

clean:
	rm $(TARGET) $(OBJ) -f

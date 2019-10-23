# Makefile with dependencies management (Q4)

CXX        = g++
CXXFLAGS   = -Wall -Wextra -std=c++11
DEPFLAGS   = -MMD
LDFLAGS    = 
# Replace tp.cpp with the cpp files that need to be compiled
SRCS       = tp.cpp 
OBJS       = $(SRCS:.cpp=.o)
# Replace tp_main with the name you want to give to your executable file
TARGET     = tp_main 
DEPS	   = $(OBJS:.o=.d)

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) $(LDFLAGS) -o $(TARGET) $(OBJS) 

%.o: %.cpp
	$(CXX) $(CXXFLAGS) $(DEPFLAGS) -c  $<

clean:
	rm -f *.o *.d

mrproper: clean
	rm -f $(TARGET)

exe: $(TARGET)
	./$(TARGET)

-include $(DEPS)



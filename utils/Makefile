# Generic Makefile with automatic dependencies management

# Choose your compiler g++/clang++
CXX        = g++
CXXFLAGS   = -Wall -Wextra -std=c++11
DEPFLAGS   = -MMD
LDFLAGS    = 
# Replace your_files.cpp with the list of cpp files that need to be compiled
# Ex: file1.cpp file2.cpp file3.cpp
SRCS       = your_files.cpp 
OBJS       = $(SRCS:.cpp=.o)
# Replace your_app with the name you want to give to your executable file
TARGET     = your_app 
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



# Compiler
CXX = g++

# Compiler flags
CXXFLAGS = -Wall -Wextra -pedantic -std=c++11

# Source files
SRCS = visualizer.cpp BST.cpp Node.cpp

# Object files
OBJS = $(SRCS:.cpp=.o)

# Executable name
EXEC = visualizer

all: $(EXEC)

# Build executable
$(EXEC): $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(EXEC)

# Build object files
visualizer.o: BST.h
BST.o: BST.h Node.h
Node.o: Node.h

# Clean up object files and executable
clean:
	rm -f $(OBJS) $(EXEC)
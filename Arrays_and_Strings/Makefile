CXX = g++
CXXFLAGS = -Wall -Wextra -std=c++20

TARGET = test
SRC = str_compare.cpp

all: $(TARGET)

$(TARGET): $(SRC)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(SRC)

clean:
	rm -f $(TARGET)

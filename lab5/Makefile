# Directories
INC_DIR := includes
OBJ_DIR := obj
SRC_DIR := src

# Executable name
EXE := main

# Source and object files
SRC := $(wildcard $(SRC_DIR)/*.cpp)
OBJ := $(SRC:$(SRC_DIR)/%.cpp=$(OBJ_DIR)/%.o)
DEPS := $(OBJ:.o=.d)

# Compiler and flags
GCC := g++
CPPFLAGS := -I$(INC_DIR) -Wall -MMD -MP -std=c++2a -g

# Default target
.PHONY: all
all: $(EXE)

# Linking the executable
$(EXE): $(OBJ)
	$(GCC) $(CPPFLAGS) $^ -o $@

# Compiling source files into object files
$(OBJ_DIR)/%.o: $(SRC_DIR)/%.cpp | $(OBJ_DIR)
	$(GCC) $(CPPFLAGS) -c $< -o $@

# Ensure the object directory exists
$(OBJ_DIR):
	@mkdir -p $(OBJ_DIR)

# Include dependency files
-include $(DEPS)

# Test target
.PHONY: test
test: all
	./$(EXE)

# Clean target
.PHONY: clean
clean:
	rm -f $(EXE)
	rm -f $(OBJ)
	rm -rf $(OBJ_DIR)

# Clean object files only
.PHONY: clean-obj
clean-obj:
	rm -f $(OBJ)
	rm -f $(DEPS)


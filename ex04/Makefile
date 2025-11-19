CC := c++
CFLAGS := -Wall -Wextra -Werror -g -std=c++98

NAME := replacer

BUILD_DIR := build

SRCS := $(wildcard *.cpp)
OBJS := $(patsubst ./%.cpp, $(BUILD_DIR)/%.cpp, $(SRCS))

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $@

$(BUILD_DIR)/%.o: %.cpp
	@mkdir -p $(BUILD_DIR)
	$(CC) $(CFLAGS) -c $^ -o $@

clean:
	@rm -rf $(BUILD_DIR)

fclean: clean
	@rm -f $(NAME)


re: fclean all

.PHONY : all clean fclean re

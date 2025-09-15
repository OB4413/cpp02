pro = class_Orthodox
com = c++
flags = -Wall -Wextra -Werror -std=c++98

src = main.cpp Fixed.cpp

obj = $(src:.cpp=.o)

all: $(pro)

$(pro): $(obj)
	$(com) $(flags) $(obj) -o $(pro)

%.o: %.cpp
	$(com) $(flags) -c $< -o $@

clean:
	rm -rf $(obj)

fclean: clean
	rm -rf $(pro)

re: fclean all

pro = BSP
com = c++
flage = -Wall -Wextra -Werror -std=c++98

src = main.cpp Fixed.cpp Point.cpp bsp.cpp
obj = $(src:.cpp=.o)

all: $(pro)

$(pro): $(obj)
	$(com) $(flage) $(obj) -o $(pro)

%.o: %.cpp
	$(com) $(flage) -c $< -o $@

clean:
	rm -rf $(obj)

fclean: clean
	rm -rf $(pro)

re: fclean all

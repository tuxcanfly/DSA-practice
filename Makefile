linkedlist_test: linkedlist_test.cpp linkedlist.cpp linkedlist.h
	g++ linkedlist.cpp linkedlist_test.cpp

stack_test: stack_test.cpp stack.cpp stack.h
	g++ stack.cpp stack_test.cpp

parens: stack.h
	g++ parens.cpp stack.cpp

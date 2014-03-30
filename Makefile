linkedlist_test: linkedlist_test.cpp linkedlist.cpp linkedlist.h
	g++ linkedlist.cpp linkedlist_test.cpp

stack_test: stack_test.cpp stack.cpp stack.h
	g++ stack.cpp stack_test.cpp

btree_test: btree.cpp btree.h
	g++ btree_test.cpp btree.cpp

parens: stack.h
	g++ parens.cpp stack.cpp

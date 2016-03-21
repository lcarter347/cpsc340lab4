# build an executable named simple_static 
all: expressioncheck

expressioncheck: checkexpression.cpp expressionstack.h expressionstack.cpp 
	g++ checkexpression.cpp expressionstack.cpp -o check


clean: 
	$(RM) check

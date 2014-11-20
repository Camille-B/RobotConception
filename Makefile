CC = g++
CFLAGS = -g -fexceptions -Wall -std=c++11
EXEC_NAME = testRobot
INCLUDES = $(wildcard include/*.h) $(wildcard include/*/*.h) 
LIBS = $(wildcard src/*.cpp) $(wildcard src/*/*.cpp)
OBJ_FILES = $(wildcard src/*.o)
DOXY       = doxygen
DOCDIR	   = doc
DOXYFILE   = $(DOCDIR)/Doxyfile

all : $(EXEC_NAME)
	make doc

clean :
	rm $(EXEC_NAME) $(OBJ_FILES)
	rm doc.html	
	rm -R $(DOCDIR)/html/
	

doc: .FORCE
	$(DOXY) $(DOXYFILE)
	ln -s doc/html/index.html doc.html

.FORCE:

$(EXEC_NAME) : $(OBJ_FILES)
	$(CC) $(CFLAGS) -o $(EXEC_NAME) $(OBJ_FILES) $(LIBS)

%.o: %.cpp
	$(CC) $(CFLAGS) $(INCLUDES) -o $@ -c $<




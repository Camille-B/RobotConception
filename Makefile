CC = g++
CFLAGS = -g -fexceptions -Wall -std=c++11
EXEC_NAME = testRobot
INCLUDES = $(wildcard include/*.h) $(wildcard include/*/*.h) $(wildcard include/*/*/*.h)
LIBS = $(wildcard src/*.cpp) $(wildcard src/*/*.cpp) $(wildcard src/*/*/*.cpp)
OBJ_FILES = $(wildcard src/*.o) $(wildcard src/*/*.o)  $(wildcard src/*/*/*.o)
DOXY       = doxygen
DOCDIR	   = doc/
DOXYFILE   = $(DOCDIR)Doxyfile
HTMLDOCDIR = $(DOCDIR)html/
HTMLDOC    = $(HTMLDOCDIR)index.html
HTMLDOCREF = doc.html

all: $(EXEC_NAME)
	
set_env: mrproper
	make all
	make doc 


clean:
ifneq ("$(wildcard $(EXEC_NAME))","") 
	rm $(EXEC_NAME)	
endif
ifneq ("$(wildcard $(OBJ_FILES))","") 
	rm $(OBJ_FILES)	
endif

mrproper: clean
ifneq ("$(wildcard $(HTMLDOCREF))","") 
	rm $(HTMLDOCREF)	
endif
ifneq ("$(wildcard $(HTMLDOCDIR))","") 
	rm -R $(HTMLDOCDIR)	
endif	
	
doc: .FORCE
	$(DOXY) $(DOXYFILE)
ifeq ("$(wildcard $(HTMLDOCREF))","") 
	ln -s doc/html/index.html doc.html
endif

.FORCE:

$(EXEC_NAME) : $(OBJ_FILES)
	$(CC) $(CFLAGS) -o $(EXEC_NAME) $(OBJ_FILES) $(LIBS)

%.o: %.cpp
	$(CC) $(CFLAGS) $(INCLUDES) -o $@ -c $<

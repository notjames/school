INCLUDES = ./includes
CXX      = g++
GCXXFLAGS= -I$(INCLUDES) -H
# remove -g if you don't want debug symbols compiled in
CXXFLAGS = -Wall -g -I$(INCLUDES)
PRODUCT  = roster
OBJECTS  = student.o networkStudent.o softwareStudent.o securityStudent.o

$(OBJECTS): $(PRODUCT)

.PHONY: all

#graph: $(OBJECTS)
#	$(CXX) $(GCXXFLAGS) $^

all: $(OBJECTS)
	$(CXX) $(CXXFLAGS) -o $@ $^

install:
	mv $(PRODUCT) ..

clean:
	-rm *.o ../$(PRODUCT)

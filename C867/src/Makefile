INCLUDES = ./includes
CXX      = g++
GCXXFLAGS= -I$(INCLUDES) -H
# remove -g if you don't want debug symbols compiled in
CXXFLAGS = -Wall -g -I$(INCLUDES)
PRODUCT  = roster
OBJECTS  = networkStudent.o softwareStudent.o securityStudent.o student.o

$(OBJECTS): $(PRODUCT)

.PHONY: all .dep

#graph: $(OBJECTS)
#	$(CXX) $(GCXXFLAGS) $^

all: $(OBJECTS)
	$(CXX) $(CXXFLAGS) -o $@ $^

.dep:
	mkdir $@
.dep/%.dep: %.cpp .dep
	(echo $@ \\; $(CXX) $(CXXFLAGS) -MM $<) > $@ || (rm $@; false)

DEPEND := $(patsubst %.dep,.dep/%.dep,$(OBJ:.o=.dep))
	include $(DEPEND)

install:
	mv $(PRODUCT) ..

clean:
	-rm *.o ../$(PRODUCT)



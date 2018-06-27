INCLUDES = ./includes
CXX      = g++
# remove -g if you don't want debug symbols compiled in
CXXFLAGS = -Wall -g -I$(INCLUDES) -Wc++11-extensions -std=c++11
PRODUCT  = roster
OBJECTS  = networkStudent.o softwareStudent.o securityStudent.o student.o

$(PRODUCT): $(OBJECTS)

.PHONY: .dep all

all: $(OBJECTS)
	$(CXX) $(CXXFLAGS) -o $@ $^

# g++ -I includes -MMD -H *.cpp -MF deps.out > deps.txt 2>&1
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
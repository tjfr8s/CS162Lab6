
CXX = g++
CXXFLAGS = -std=c++0x
CXXFLAGS += -Wall
CXXFLAGS += -pedantic-errors
CXXFLAGS += -g
#CXXFLAGS += -O3
#LDFLAGS = 

SRCEXT = cpp
INCEXT = hpp

SRCS = $(shell find . -maxdepth 1 -type f -name \*.$(SRCEXT))
OBJS = $(patsubst ./%, ./%, $(SRCS:.$(SRCEXT)=.o))
INCS = $(shell find . -maxdepth 1 -type f -name \*.$(INCEXT))

RecursionLab: $(OBJS)
	$(CXX) $^ -o RecursionLab

#PersonTest: Person.o Student.o Instructor.o PersonTest.o 
#	$(CXX) $^ -o PersonTest

#UniversityTest: Menu.o IntegerValidation.o Person.o Student.o University.o Building.o Instructor.o UniversityTest.o 
#	$(CXX) $^ -o UniversityTest 

$(OBJS): $(SRCS) $(INCS)
	$(CXX) $(CXXFLAGS) -c $(@:.o=.$(SRCEXT))

#PersonTest.o: PersonTest.cpp
#	$(CXX) $(CXXFLAGS) -c PersonTest.cpp 

.PHONY: clean
clean:
	rm *.o RecursionLab

	


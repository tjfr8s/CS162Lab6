
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

QueueLab: $(OBJS)
	$(CXX) $^ -o QueueLab

QueueTest: Node.o QueueTest.o Queue.o Menu.o IntegerValidation.o
	$(CXX) $^ -o QueueTest

$(OBJS): $(SRCS) $(INCS)
	$(CXX) $(CXXFLAGS) -c $(@:.o=.$(SRCEXT))

#QueueTest.o: QueueTest.cpp
#	$(CXX) $(CXXFLAGS) -c QueueTest.cpp 

.PHONY: clean
clean:
	rm *.o QueueTest QueueLab

	


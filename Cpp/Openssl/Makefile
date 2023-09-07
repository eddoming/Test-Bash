SRCDIR = .
SOURCES := $(wildcard $(SRCDIR)/*.cpp)
OBJDIR = .
OBJS := $(patsubst $(SRCDIR)/%.cpp,$(OBJDIR)/%.o,$(SOURCES))
TARGET = main
DEPEND = depend.mk

CXX = g++
CXXFLAGS = \
	-fdiagnostics-color=always \
	-g \
	-pthread \
	-std=c++17 \
	-I$(SRCDIR)
LDFLAGS = \
	-lcrypto \
	-lssl

all: depend $(TARGET)

depend: $(DEPEND)

$(DEPEND): $(SOURCES)
	> $@
	$(CXX) -o $@ $^ $(LDFLAGS)

clean:
	rm -rf $(TARGET) $(OBJS)

disclean: clean
	rm -rf $(DEPEND)

.PHONY: clean depend disclean




CXX ?= c++
CXXFLAGS ?= -std=c++17 -Wall -Wextra -Wpedantic
CPPFLAGS += -Isrc
GTEST_LIBS ?= -lgtest_main -lgtest -pthread

TEST_SOURCES := $(wildcard tests/*_test.cpp)
TEST_BINARIES := $(patsubst tests/%.cpp,build/tests/%,$(TEST_SOURCES))

.PHONY: all test clean

all: $(TEST_BINARIES)

build/tests/%: tests/%.cpp
	mkdir -p $(@D)
	$(CXX) $(CPPFLAGS) $(CXXFLAGS) $< $(LDFLAGS) $(GTEST_LIBS) $(LDLIBS) -o $@

test: all
	@set -e; for test_binary in $(TEST_BINARIES); do ./$$test_binary; done

clean:
	rm -rf build

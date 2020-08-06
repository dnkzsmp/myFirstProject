.PHONY: all clear

SOURCE = build/source
G++ = g++ -Wall -Werror
PRG.exe = bin/prg

all: $(PRG)

$(PRG): $(SOURCE)/main.o $(SOURCE)/Resume.o
    $(G++) $(SOURCE)/Resume.o $(SOURCE)/main.o -o $(PRG) -lm

$(SOURCE)/main.o: source/main.cpp
    $(G++) -c source/main.cpp -o $(SOURCE)/main.o -lm

$(SOURCE)/Resume.o: source/Resume.cpp
    $(G++) -c source/Resume.cpp -o $(SOURCE)/Resume.o -lm

clean:
    rm -rf $(SOURCE)/*.o bin/*
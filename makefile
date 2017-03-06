CC = g++
flags = -std=c++14

makemain: library
	$(CC) $(flags) build/*.o src/main.cpp -o TestProgram

library: build/matrix.o

build/matrix.o: src/Matrix.cpp
	$(CC) $(flags) -c src/Matrix.cpp -o matrix.o
	@mkdir -p build
	@mv matrix.o build

clean:
	rm -R -f build
	rm -f TestProgram
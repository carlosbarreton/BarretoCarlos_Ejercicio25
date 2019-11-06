all: run

run: clase25.x clase25.cpp
	./clase25.x

clase25.x: clase25.cpp
	g++ clase25.cpp -o clase25.x

clean:
	rm clase25.x

.PHONY: all run

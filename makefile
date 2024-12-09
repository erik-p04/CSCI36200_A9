solve: main.cpp
	g++ main.cpp -o solve

clean:
	rm ./solve

run: solve
	./solve

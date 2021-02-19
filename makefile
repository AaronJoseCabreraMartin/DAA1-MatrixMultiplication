all: main/main.cpp
	g++ -O3 main/main.cpp src/matrixCalculator.cpp src/multiply.cpp src/multiplyStrategyCols.cpp src/multiplyStrategyRows.cpp -o bin/matrixCalculator

debug: main/main.cpp
	g++ -g main/main.cpp src/matrixCalculator.cpp src/multiply.cpp src/multiplyStrategyCols.cpp src/multiplyStrategyRows.cpp -o bin/matrixCalculator

clean:
	rm bin/matrixCalculator
 #
 # Universidad de La Laguna
 # Escuela Superior de Ingeniería y Tecnología
 # Grado en Ingeniería Informática
 # Informática Básica
 #
 # @author Miguel Prieto Almeida alu0101623450@ull.edu.es
 # @date Oct 29th 2023
 # @brief the program 

CXX = g++ #compilador c++
CXXFLAGS = -std=c++17 -Wall #opciones de compilación

TARGET = P58153 #nombre del ejecutable
SRCS = harmonic_numbers_2.cc #Lista de archivos fuente
OBJS = $(SRCS:.CC=.O) #GENERA LISTA DE ARCHIVOS OBJETO (.o)

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $@ $(OBJS)

%.o: %.cc
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

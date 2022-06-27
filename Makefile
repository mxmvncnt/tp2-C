# Makefile
TARGET= main
$(TARGET): src/main.c
	gcc -c -o src/GenerateurNombre.o src/GenerateurNombre.c
	gcc -c -o src/AfficherMenu.o src/AfficherMenu.c
	gcc -c -o src/main.o src/main.c
	gcc -o main src/main.o src/AfficherMenu.o src/GenerateurNombre.o

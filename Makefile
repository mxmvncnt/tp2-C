# Makefile
TARGET= main
$(TARGET): src/main.c
	mkdir -p build
	gcc -c -o build/GenerateurNombre.o src/GenerateurNombre.c
	gcc -c -o build/AfficherMenu.o src/AfficherMenu.c
	gcc -c -o build/VerifReponse.o src/VerifReponse.c
	gcc -c -o build/main.o src/main.c
	gcc -o main build/main.o build/AfficherMenu.o build/GenerateurNombre.o build/VerifReponse.o

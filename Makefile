# Makefile
TARGET	= main
BUILD	= build/main.o build/GenerateurNombre.o build/AfficherMenu.o build/VerifReponse.o build/VerifVictoire.o
OUT	= main
CC 	= gcc
FLAGS 	= -c -o
CMD 	= $(CC) $(FLAGS)

$(TARGET): src/main.c
	mkdir -p build
	$(CMD) build/main.o			src/main.c
	$(CMD) build/AfficherMenu.o 		src/AfficherMenu.c
	$(CMD) build/GenerateurNombre.o 	src/GenerateurNombre.c
	$(CMD) build/VerifReponse.o 		src/VerifReponse.c
	$(CMD) build/VerifVictoire.o 		src/VerifVictoire.c
	$(CC) -o $(OUT) $(BUILD)

clean:
	rm -f $(BUILD) $(OUT)


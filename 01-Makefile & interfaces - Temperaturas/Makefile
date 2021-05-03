BIN = TablasDeConversion.exe
OBJ = TablasDeConversion.o Conversion.o
CC = gcc
CFLAGS = -std=c11 -Wall -pedantic-errors -m32 -D __DEBUG__ -g3 $(INCS)
# LDFLAGS = -static-libgcc
INCS = -I"C:/Program Files/Dev-Cpp/MinGW64/x86_64-w64-mingw32/
include"
LDLIBS = -L"C:/Program Files/Dev-Cpp/MinGW64/x86_64-w64-mingw32/lib32"
RM = rm -f
$(BIN): $(OBJ)
 $(CC) $(OBJ) -o $(BIN) $(CFLAGS) $(LDFLAGS) $(LDLIBS)
TablasDeConversion.o: TablasDeConversion.c Conversion.h
 $(CC) -c TablasDeConversion.c -o TablasDeConversion.o $(CFLAGS)
Conversion.o: Conversion.h Conversion.c
 $(CC) -c Conversion.c -o Conversion.o $(CFLAGS)
.PHONY: clean
clean:
 $(RM) $(OBJ) $(BIN)

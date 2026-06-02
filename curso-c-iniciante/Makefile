CC := gcc
CFLAGS := -std=c11 -Wall -Wextra -pedantic
EXEMPLOS := $(wildcard exemplos/*.c)
PROGRAMAS := $(patsubst exemplos/%.c,bin/%,$(EXEMPLOS))

.PHONY: exemplos limpar

exemplos: $(PROGRAMAS)

bin/%: exemplos/%.c
	@mkdir -p bin
	$(CC) $(CFLAGS) $< -o $@

limpar:
	rm -rf bin

DOTFILES=$(wildcard *.dot)
SVGFILES=$(patsubst %.dot, %.svg, $(DOTFILES))

.PHONY: all

all: $(SVGFILES)

%.svg: %.dot
	dot -Tsvg $< -o $@

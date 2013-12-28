CC=gcc
CSRC=$(shell find . -name '*.c')
OBJS=$(CSRC:.c=.o)

CFLAGS=-m32 -O2 -Wall -Werror -Wsign-conversion
DEPEND=$(CC) -MM -I.

trace_cal: $(OBJS)
	$(CC) -o trace_cal $(CFLAGS) $(OBJS)

clean:
	-rm trace_cal *.o *.d

%.d:%.c Makefile
	@$(SHELL) -ec '$(DEPEND) $< | sed '\''s/\($*\.o\)[ :]*/\1 $@ : /g'\'' > $@'

-include $(CSRC:.c=.d)

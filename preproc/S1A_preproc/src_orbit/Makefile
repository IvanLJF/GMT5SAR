include ../../../config.mk
PROG =  ext_orb_s1a
CSRCS = ext_orb_s1a.c

OBJS =  $(CSRCS:.c=.o)
INCLUDES = -I../include -I../../../gmtsar/include -I$(TIFF_INC)
CLIBS = -L../../../gmtsar/lib_src -lgmtsar -L../lib -lxmlC -L$(TIFF_LIB) -ltiff -lm

$(PROG): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $@ $(OBJS) $(CLIBS) 

all:	$(PROG)

install:
	$(INSTALL) $(PROG) $(bindir)

clean:
	rm -f $(OBJS) tags core

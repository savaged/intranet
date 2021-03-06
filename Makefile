CXX := g++
CXXFLAGS:= -g -Wall -Wextra -Werror
TARGET:= index.cgi
OBJDIR:= obj/
SRCDIR:= src/
INCDIR:= include/
OBJ:= $(OBJDIR)main.o $(OBJDIR)HtmlDoc.o $(OBJDIR)Content.o $(OBJDIR)Index.o $(OBJDIR)PageOne.o

$(TARGET): $(OBJ)
		$(CXX) $(CXXFLAGS) -o $(TARGET) $^ -lcgicc

$(OBJDIR)%.o: $(SRCDIR)%.cpp
		$(CXX) $(CXXFLAGS) -I $(INCDIR) -c $< -o $@

$(shell mkdir -p $(OBJDIR))

clean:
		rm -f $(TARGET)
			rm -f $(OBJDIR)*.o

install: 
		cp $(TARGET) /usr/lib/cgi-bin

uninstall: 
		rm /usr/lib/cgi-bin/$(TARGET)


#Compiler and Options
CC=gcc #replace with your choice of Compiler
COPT=-Wall #replace with Compiler based Options

#Target And Dependencies
TRI_DIR=src/triangle
TEST_DIR=path_here 
#Name of the shape directory (ex- src/triangle)
TEST_SRC=source_file_here 
#Name of the source c file of the function (ex- t_vertical.c)

# Compile every c file with it's major c file, in simple language, triangle.c is depends on t_default.c and t_vertical.c so, we compile 
# t_default.c and t_vertical.c to their object code.Then we compile triangle.c with those two object codes and create triangle.o object code.
# This pattern is continued to all shapes.In the last step we compile all main shape object codes (triangle.o, square.o ...) with main.c and 
# produces main.o .Then it is linked and main binary (ptrn) is produced.

Binary: ptrn

#Link object files into executables
# $^ and $@ refers to all Dependencies and Target repectively
ptrn: obj/main.o obj/triangle.o obj/t_default.o obj/t_vertical.o
	$(CC) $(COPT) $^ -o $@

#Compile source files to object codes
obj/main.o: main.c obj/triangle.o
	$(CC) $(COPT)  -c $< -o $@

#Triangle Object files
# $< means the first Dependency
obj/triangle.o: $(TRI_DIR)/triangle.c obj/t_default.o obj/t_vertical.o
	$(CC) $(COPT) -c $< -o $@
obj/t_default.o: $(TRI_DIR)/t_default.c
	$(CC) $(COPT) -c $< -o $@
obj/t_vertical.o: $(TRI_DIR)/t_vertical.c
	$(CC) $(COPT) -c $< -o $@

#Clean all object and executables files
clean:
	rm -f obj/*.o ptrn
test:
	$(CC) $(COPT) $(TEST_DIR)/$(TEST_SRC) -o test && ./test

#Compiler and Options
CC=gcc #replace with your choice of Compiler
COPT=-Wall #replace with Compiler based Options

#Target And Dependencies
TRI_DIR=src/triangle
TRI_OBJ=obj/triangle.o obj/t_default.o obj/t_vertical.o
TEST_DIR=path_here 
#Name of the shape directory (ex- src/triangle)
TEST_SRC=source_file_here 
#Name of the source c file of the function (ex- t_vertical.c)

# Compile every .c file to object file separately and put the objecct file in the obj directory:
# make a target ex- 'obj/source.o:' and define it's Dependency to the path of that file ex src/src.c. You can put the
# directory to a variable, ex- src/triangle is in TRI_DIR variable. To make the final binary, link all object files.

Binary: ptrn

#Link object files into executables
# $^ and $@ refers to all Dependencies and Target repectively
ptrn: obj/main.o $(TRI_OBJ)
	$(CC) $(COPT) $^ -o $@

#Compile source files to object codes
obj/main.o: main.c
	$(CC) $(COPT)  -c $< -o $@

#Triangle Object files
# $< means the first Dependency
obj/triangle.o: $(TRI_DIR)/triangle.c
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

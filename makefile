all:libeasylogging++ libshareLog  libstudent  libteacher  main  

libeasylogging++:easylogging++.o 
	ar -rc libeasylogging++.a easylogging++.o
	
easylogging++.o:easylogging++.h easylogging++.cc
	gcc -c easylogging++.cc

libshareLog:easylogging++.o shareLog.o
	ar -rc libshareLog.a shareLog.o easylogging++.o

shareLog.o:shareLog.cpp
	g++ -c shareLog.cpp shareLog.h

libstudent: student.o shareLog.o
	ar -rc libstudent.a student.o shareLog.o

student.o:student.cpp student.h
	g++ -c student.cpp

libteacher: teacher.o shareLog.o
	ar -rc libteacher.a teacher.o shareLog.o	

teacher.o:teacher.cpp
	g++ -c teacher.cpp

main:main.o
	g++ -std=c++11 main.o -o main  -I. -L. -lstudent -lshareLog -lteacher
	
main.o:main.cpp
	g++ -c main.cpp

.PHONY:clean
clean:
	rm -f *.exe *.a *.o
	rm -r log logs obj .objs
	rm -rf log logs obj .objs
	

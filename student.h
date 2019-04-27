#ifndef STUDENT_H
#define STUDENT_H
#include "shareLog.h"
class student
{
public:
    /** Default constructor */
    student(const char* name_,int heigth_);
    /** Default destructor */
    virtual ~student();
    void introduce();

private:
    char name[15];
    int height;
};

#endif // STUDENT_H

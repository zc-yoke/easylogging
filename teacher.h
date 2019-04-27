#ifndef TEACHER_H_INCLUDED
#define TEACHER_H_INCLUDED
#include "shareLog.h"
class teacher
{
public:
    /** Default constructor */
    teacher(const char* name_,int heigth_);
    /** Default destructor */
    virtual ~teacher();
    void introduce();

private:
    char name[15];
    int height;
};


#endif // TEACHER_H_INCLUDED

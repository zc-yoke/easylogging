#include "student.h"
student::student(const char* name_,int height_)
{
    strcpy(name,name_);
    height=height_;
}
void student::introduce()
{
    LOG(DEBUG) << "introduce my name is lily,height is "<<height;
}

student::~student()
{
    //dtor
}

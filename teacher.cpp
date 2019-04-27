#include "teacher.h"
teacher::teacher(const char* name_,int height_)
{
    strcpy(name,name_);
    height=height_;
}
void teacher::introduce()
{
    LOG(DEBUG) << "introduce my name is "<<name<<",height is "<<height;
}

teacher::~teacher()
{
    //dtor
}

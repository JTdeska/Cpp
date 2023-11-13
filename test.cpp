#include <iostream>

int main(){
int i,j,t;
int buf[5]= { 23, 37, 12,  78,  36};
for(i=0; i<5; i++)
{
    for(j=0; j<i; j++)
    {
        if(buf[i] < buf[j])
        {
            t=buf[i];
            buf[i]=buf[j];
            buf[j]=t;
        }
    }
}
}
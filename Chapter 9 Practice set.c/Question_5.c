// Ques. Write a structure capable of storing data, write a function to compare those dates.//

#include <stdio.h>

typedef struct storedate{
    int mm;
    int dd;
    int yyyy;
}date;

int compare(date d1, date d2){
    if ((d1.yyyy == d2.yyyy) && (d1.mm == d2.mm) && (d1.dd == d2.dd))
    {
        return 0;
    }
    if (d1.yyyy > d2.yyyy)
    {
        return 1;
    }
    else if (d1.yyyy < d2.yyyy)
    {
        return -1;
    }
    else if (d1.mm > d2.mm)
    {
        return 1;
    }
    else if (d1.mm < d2.mm)
    {
        return -1;
    }
    else if (d1.dd > d2.dd)
    {
        return 1;
    }
    else if (d1.dd < d2.dd)
    {
        return -1;
    }
    
}

int main(){
    date d1 = {01,11,2008};
    date d2 = {02,07,2007};

    printf("%d",compare(d1,d2));

    return 0;
}
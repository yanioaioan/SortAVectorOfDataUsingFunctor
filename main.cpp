#include <iostream>
#include <vector>
#include <algorithm>

typedef struct Vec3
{
    int x;
    int y;
    int z;
}Vec3;

bool comparator(const Vec3 & a, const Vec3 & b)
{
    // sort in increasing order
    return a.x < b.x;
}


int main()
{
    std::vector<Vec3> myvec;
    Vec3 v1; v1.x=5;
    Vec3 v2; v2.x=4;
    myvec.push_back(v1);
    myvec.push_back(v2);

    //sort by x element
    std::sort(myvec.begin(), myvec.end(), comparator);

    //print out
    for (auto &i: myvec)
    {
        std::cout<<i.x<<std::endl;
    }

    return 0;
}


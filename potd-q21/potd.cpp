#include "potd.h"

// Your code here!
double sum(vector<double>::iterator start, vector<double>::iterator end)
{
    double sum = 0.0;
    for (vector<double>::iterator i = start; i != end; i++)
    {
        sum += *i;
    }
    return sum;
}

vector<double>::iterator max_iter(vector<double>::iterator start, vector<double>::iterator end)
{
    vector<double>::iterator max_iter = start;
    for (vector<double>::iterator i = start; i != end; i++)
    {
        if (*max_iter < *i)
        {
            max_iter = i;
        }
    }
    return max_iter;
}

void sort_vector(vector<double>::iterator start, vector<double>::iterator end)
{
    for (vector<double>::iterator i = start; i != end; i++)
    {
        iter_swap(i, max_iter(i, end));
    }
}